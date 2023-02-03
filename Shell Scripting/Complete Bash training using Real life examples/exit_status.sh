#!/bin/bash

 # echo $? # returns status of previous command (if it is successful) 

ls -l /Documents
if [ $? -eq 0 ]
then
	echo "File exist"
else
	echo "File doesn't exist"
fi
echo
echo
echo
