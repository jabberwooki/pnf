#!/bin/bash
# Prepare needed commands
MV=`which mv`
RENAME=`which rename`
SED=`which sed`
FIND=`which find`

# Save current directory
#CURRENTDIR=`pwd`

# Get new profile name
NEWNAME=$1
if [ -z $NEWNAME ]; then
  echo "Error: missing argument"
  echo "Usage: " $0 "[new_name]"
  exit 1;
fi

# Enter the profile dir
cd repository

# Rename all profile files
$RENAME s/kstarter\./$NEWNAME./ *

# Rename functions in profile files
$SED s/kstarter/$NEWNAME/g -i *.install
$SED s/kstarter/$NEWNAME/g -i *.profile

# Change the default profile name and profile description values in profile's .info file.
$FIND ${NEWNAME}.info -exec $SED s/"Korora Starter"/${NEWNAME^}/g -i {} \;
$FIND ${NEWNAME}.info -exec $SED s/"a quick gettind started D7"/"the ${NEWNAME^}"/g -i {} \;

# Modify the project path in features .info files.
$FIND modules/features -mindepth 2 -maxdepth 2 -name "*.info" -exec $SED s/kstarter/${NEWNAME}/g -i {} \;

# Rename translation files
$RENAME s/kstarter\./$NEWNAME./ translations/*.po

