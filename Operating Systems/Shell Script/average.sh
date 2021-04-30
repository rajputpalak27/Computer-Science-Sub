#! /bin/bash

n=4
nvalue=(1,2,3,4)
sum=0
for i in $nvalue
do 
	sum=`expr $sum+$i`
done

average=`expr $sum/$n`
echo "The Average of $n Numbers is $average"
