#!/bin/sh

# Prepare needed commands
FIND=`which find`
LN=`which ln`
UNLINK=`which unlink`
BASENAME=`which basename`
LS=`which ls`
SED=`which sed`
DATE=`which date`
DRUSH=`which drush`

# Generate build dir
BUILDDIR=builds/`$DATE +"%y-%m-%d--%H-%M-%S"`

# Build core
$DRUSH make repository/drupal-org-core.make $BUILDDIR

# Build contrib
$DRUSH make repository/drupal-org.make --no-core $BUILDDIR

# Apache authentication config added to .htaccess if trigger file 'shared/apache_authentication' exists.
file="shared/apache_authentication"
if [ -f "$file" ]
then
	echo "AuthType Basic" >> $BUILDDIR/.htaccess
	echo "AuthName \"Sites PNX - Acces restreint\"" >> $BUILDDIR/.htaccess
	echo "AuthBasicProvider file" >> $BUILDDIR/.htaccess
	echo "AuthUserFile \"/var/virtual_www/pnf/mutweb/pnx-passwords\"" >> $BUILDDIR/.htaccess
	echo "Require valid-user" >> $BUILDDIR/.htaccess
	echo "Apache authentication settings added to .htaccess file."
else
	echo "Trigger file $file not found. File .htaccess unaltered."
fi

# Add shared symlinks
for f in `$FIND shared -mindepth 1 -maxdepth 1 ! -name 'README.txt' ! -name 'private' ! -name 'template' ! -name 'common-files'`
do
  $LN -s ../../../$f $BUILDDIR/sites/$($BASENAME $f)
done

# Add the profile symlink
PROFILENAME=`$BASENAME $($LS repository/*.profile) | $SED -e 's/\.profile//'`
$LN -s ../../../repository $BUILDDIR/profiles/$PROFILENAME

# Add the less.php symlink
$LN -s ../../../repository/libraries/less.php $BUILDDIR/sites/all/libraries/less.php

# Add common files directory symlink
$LN -s ../../../../shared/common-files $BUILDDIR/sites/all/common-files

# Change www symlink
if [ -h www ]
then
  $UNLINK www
fi
$LN -s $BUILDDIR www