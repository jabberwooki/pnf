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

# Add shared symlinks
for f in `$FIND shared -mindepth 1 -maxdepth 1 ! -name 'README.txt' ! -name 'private' ! -name 'template'`
do
  $LN -s ../../../$f $BUILDDIR/sites/$($BASENAME $f)
done

# Add the profile symlink
PROFILENAME=`$BASENAME $($LS repository/*.profile) | $SED -e 's/\.profile//'`
$LN -s ../../../repository $BUILDDIR/profiles/$PROFILENAME

# Change www symlink
if [ -h www ]
then
  $UNLINK www
fi
$LN -s $BUILDDIR www
