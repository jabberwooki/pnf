#!/bin/sh

# Prepare needed commands
READLINK=`which readlink`
RM=`which rm`
UNLINK=`which unlink`
FIND=`which find`

# Get actual symlinked build
ACTUALBUILD=""
if [ -h www ]
then
  ACTUALBUILD=`$READLINK www`
fi

# Loop on all builds and delete them except the actual one
for b in `$FIND builds -type d`
do
  if [ $b != $ACTUALBUILD ]
  then
    $RM -rf $b
  fi
done

# Unlink www and delete last build if asked
if [ $1 ]
then
  $UNLINK www
  $RM -rf $ACTUALBUILD
fi
