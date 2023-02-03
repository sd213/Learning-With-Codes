#!/bin/bash

echo 
echo "Please chose one of the options below"
echo
echo "a = Display Date and Time "
echo "b = List Files and Directories"
echo "c = List Users Logged in "
echo "d = Check System Uptime"
echo
echo
	read choices
	case $choices in
		a) date;;
		b) ls;;
		c) who;;
		d) uptime;;
		*) echo invalid choice - Bye.
	esac
	
