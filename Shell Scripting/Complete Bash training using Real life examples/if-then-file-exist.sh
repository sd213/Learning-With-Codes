#!/bin/bash

echo "Checking File's Existance "

if [ -e ~/Documents ]
then
	echo "file do  Exists"
else
	echo "File does not exist"
fi

echo "Checking The existance of \"Downld\" Folder"
if [ -e ~/Downld ]
then 
	echo "Folder Exist"
else
	echo "Folder does n't exist"
fi
echo
echo
echo
echo 'end of script'
