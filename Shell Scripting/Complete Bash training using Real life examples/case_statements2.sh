#!/bin/bash
NOW=$(date +"%a")
case $NOW in 
	Mon)	
		echo "Full Backup";;
	Tue|Wed|Thu|Fri)
		echo "Partial Backup";;
	Sat|Sun)
		echo "No backup";;
	*) ;;
esac
