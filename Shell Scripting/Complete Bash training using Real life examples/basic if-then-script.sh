#!/bin/bash
echo " Checking The Variable Equality"
count=100
if [ $count -eq 100 ]
then
	echo Count is 100
else
	echo Count is not 100
fi

if [ $count -eq 50 ] 
then
	echo Count is 50
else
	echo Count is not 50
fi #fi used to end if else statement

