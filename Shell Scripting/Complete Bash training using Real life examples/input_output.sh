#!/bin/bash

#
# Showing input and output
a=`hostname`
i=`ip a | grep ipv4 `
echo
echo "Enter Your name ?"
echo
read name
echo 
echo "Enter Your Profession ?"
echo
read prof
echo
echo "What is Your Favourite book ?"
echo
read books
echo 
echo "Hello Mutliverse ,It's $name speaking from $a "
echo
echo "Here is my ip - %i"
echo
echo "My profession is $prof"
echo
echo "My Favourite book is  $books "
echo
echo

echo end of Script
