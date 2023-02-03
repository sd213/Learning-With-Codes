#!/bin/bash
##
#
echo "The Older Files are --- "
find /home/somit/Scripts/ps -mtime +9000000 -exec ls -l {} \;
echo
echo
echo
echo "Deleting Those Files"
find /home/somit/Scripts/ps -mtime +9000000 -exec rm -rf {} \;

