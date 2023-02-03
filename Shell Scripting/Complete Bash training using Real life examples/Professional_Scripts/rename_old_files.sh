#!/bin/bash

find /home/somit/Scripts -mtime +90 -exec mv  {} {}.old  \;

