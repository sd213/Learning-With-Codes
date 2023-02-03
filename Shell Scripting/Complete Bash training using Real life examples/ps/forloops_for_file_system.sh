#For loops Scripts for File System - 1
#==========================================

#1 - Simple Counting
echo "1 - Simple counting:"



#!/bin/bash


for i in {1..10}


do

 
	sleep 1

	echo $i


done




echo --------------------------------------------------
echo "################################################"
echo
echo

#2 - Create multiple files with different names

echo "2 - Create multiple files with different names"
mkdir -p /home/somit/Temp


#!/bin/bash


for i in {1..10}


do


	touch /home/somit/Temp/test.$i


done


echo
echo --------------------------------------------------
echo "#################################################"
echo
echo




#3 - Create multiple files upon input

echo "3 - Create multiple files upon input"



#!/bin/bash


echo How many files do you want?


read t


echo


echo Files names should start with?


read n


for i in $(seq 1 $t)


do


	touch /home/somit/Temp/$n.$i


done

echo
echo --------------------------------------------------
echo "################################################"
echo 
echo


# 4 - Assign write permissions to files
echo "4 - Assign write permissions to files"



#!/bin/bash


for i in /home/somit/Temp/*


do


	echo Assigning write permissions to $i
	

chmod a+w $i


	sleep 1


done

echo --------------------------------------------------
echo "#################################################"
echo
echo
echo
echo



#5 - Assign write permissions to files with total time it will take
echo " #5 - Assign write permissions to files with total time it will take "


#!/bin/bash


total=`ls -l ~/Temp/* | wc -l`


echo It will take $total seconds to assign permissions...


echo


for i in /home/somit/Temp/*


do


	echo Assigning write permissions to $i


	chmod a+w $i
	

        sleep 1
 

done
