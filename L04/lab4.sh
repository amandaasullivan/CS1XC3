#!/bin/bash

# Use First Argument As Working Directory
WDIR="PWD"
filename="file1.txt"
#cd "$WDIR"

echo "$1"
echo "$2"

#question 4
if [ $# -gt 1 ] ; then
    filename=$2
fi

#question 1
if [ $1 -eq 1 ] ; then
    if [ ! -f "$filename" ] ; then
	touch "$filename"
	echo "$USER" >> "$filename"
    fi

#question 2 
elif [ $1 -eq 2 ] ; then
    if [ -e "$filename" ] && [ ! -d "backup" ] ; then 
	mkdir "backup"
	cp "./$filename" "./backup"
    fi

#question 3
elif [ $1 -eq 3 ] ; then
    if [ -f "backup/$filename" ] ; then
 	cp "backup/$filename" "./$filename"
	rm "backup/$filename"
    fi
fi


#question 5 
if [ $# -gt 2 ] ; then
    touch "excess.txt"
    for ((i=3 ; i <= $# ; i++)) ; do
	echo "${!i}" >> "excess.txt" #${!1} is an indirect variable assignment
    done
fi


echo "Finished"
