#!/bin/bash
# Help menu
print_help() {
cat <<-HELP
To properly rename your starter theme, you need to provide the following arguments:
1) Name of the chosen starter theme [bootstrap|omega]
2) New name
Example: ./scripts/theme_rename.sh bootstrap toto
HELP
exit 0
}

# Get starter theme name and new name
STARTER=$1
NEWNAME=$2
if [ -z $STARTER  ] || [ -z $NEWNAME ]
then
  echo "Error: missing argument(s)"
  print_help
  exit 1
elif [ "$STARTER" != "bootstrap" ] && [ "$STARTER" != "foundation" ] && [ "$STARTER" != "omega" ]
then
  echo "Unrecognized starter theme name: "$STARTER", please type 'bootstrap' or 'omega'."
  exit 1
fi

# Prepare needed commands
MV=`which mv`
RENAME=`which rename`
SED=`which sed`
FIND=`which find`

# Save current directory
CURRENTDIR=`pwd`

# Enter the profile dir
cd repository

# Rename the given theme, its files and reference to its files.
$MV themes/custom/kstarter_${STARTER} themes/custom/${NEWNAME}
$FIND themes/custom/${NEWNAME} -name "*kstarter?theme*" -exec $RENAME s/kstarter[-_]theme/$NEWNAME/ {} \;
$FIND themes/custom/${NEWNAME} -type f -exec $SED s/kstarter[-_]theme/$NEWNAME/g -i {} \;

# Change the default theme name value in theme's .info file.
$FIND themes/custom/${NEWNAME}/${NEWNAME}.info -exec $SED s/"Kstarter ${STARTER^}"/${NEWNAME^}/g -i {} \;

# Rename the theme in the profile's info file.
$FIND . -maxdepth 1 -name "*.info" -exec $SED s/kstarter_theme/$NEWNAME/g -i {} \;

# If Bootstrap, replace 'kstarter' with profile name in kbootstrap.strongarm.inc.
if [ $STARTER == 'bootstrap' ]
then
  $FIND modules/features/kbootstrap/kbootstrap.strongarm.inc -exec $SED s/"kstarter_bootstrap"/$NEWNAME/g -i {} \;
fi
