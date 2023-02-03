#!/bin/bash
# Author
# Date
# Description: backing up /etc/ and /var filesystem
echo " Please do RUn in root mode in case of Errors"
tar cvf ./backup_files.tar /etc/ /var
gzip backup_files.tar
find backup_files.tar.gz -mtime -1 -type f -print &> /dev/null
# -mtime n : File's  data  was  last modified less than, more than or exactly n*24 hours ago.  See the comments for -atime to understand how rounding affects the interpretation of file modification times.
# type  means file 
# &> : Whatever output comes don't throw it to screen instead put in /dev/null
if [ $? -eq 0 ]
	then
		echo	Backup was Created
		echo
		echo
		echo    Archiving Backup
		#scp ./backup_files.tar.gz root@192.168.1.x:/path
	else
		echo Backup Failed
fi
