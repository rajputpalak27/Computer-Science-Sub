#! /bin/bash

echo "Enter any number"
read num

for((i=2; i<$num; i++))
do
	if [ $((num%i)) -eq 0 ] 
	then
	echo "$num is not prime number"
	exit
        fi
done

echo "$num is prime number"


