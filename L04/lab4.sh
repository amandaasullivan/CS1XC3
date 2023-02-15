#!/bin/bash

# Use First Argument As Working Directory
WDIR="$1"
filename="file1.txt"
cd "$WDIR"


#question 4
if [ $# -gt 2 ] ; then
    filename="$3"
fi

#question 1
if [ $2 -eq 1 ] ; then
    if [ ! -f "$filename" ] ; then
	touch "$filename"
	echo "$USER" >> "$filename"
    fi

#question 2
elif [ $2 -eq 2 ] ; then
    if [ -f "$filename" ] ; then
	if [ ! -d "backup" ] ; then
		mkdir "backup"
	fi
	cp "./$filename" "./backup"
    fi

#question 3
elif [ $2 -eq 3 ] ; then
    if [ -f "backup/$filename" ] ; then
 	cp "backup/$filename" "./$filename"
	rm "backup/$filename"
    fi
fi


#question 5
if [ $# -gt 3 ] ; then
    touch "excess.txt"
    for ((i=4 ; i <= $# ; i++)) ; do
	echo "${!i}" >> "excess.txt" #${!1} is an indirect variable assignment
    done
fi


echo "Finished"
