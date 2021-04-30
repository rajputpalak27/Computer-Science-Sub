#! /bin/bash

echo  "Enter number : "
read n
sd=0
rev=""
or=$n

while [ $n -gt 0 ]
do
    r=$(( $n % 10 )) 
    n=$(( $n / 10 ))  
    sd=$(($sd+$r))
    rev=$( echo ${rev}${sd} )
done

echo "The sum of digits of a number is $sd" 
echo "$or in a reverse order $rev"
