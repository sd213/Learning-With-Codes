#!/bin/bash
grep -i error /var/log/dmesg > ./dmesg
echo "line Numbers - `cat dmesg | wc -l`" 
