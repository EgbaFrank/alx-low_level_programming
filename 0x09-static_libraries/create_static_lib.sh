#!/bin/bash
gcc -c *.c 

if [ $? -eq 0 ]; then
	ar -rc liball.a *.o

if [ $? -eq 0 ]; then
	ranlib liball.a

else
	echo -e "Error, library creation failed\n"
fi

else
	echo -e "Error, complilation failed\n"
fi
