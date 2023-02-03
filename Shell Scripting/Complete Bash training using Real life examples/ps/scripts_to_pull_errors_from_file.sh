#!/bin/bash
echo "Dmesg Errors"
grep -i error /var/log/dmesg
echo
echo "Xorg error"
echo
for xrg in "/var/log/Xorg*"
do	
	echo $xrg
	echo -------------------
	grep -i error $xrg
	echo ===================
done

echo "Xorg warnings"
echo
for xrg in "/var/log/Xorg*"
do	
	echo $xrg
	echo -------------------
	grep -i warn $xrg
	echo ===================
done

echo "Xorg failures"
echo
for xrg in "/var/log/Xorg*"
do	
	echo $xrg
	echo -------------------
	grep -i fail $xrg
	echo ===================
done
