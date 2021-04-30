#! /bin/bash

echo "Enter the length of Fibonacci Series you want
"
fibonacci (){
read len
echo "The Fibonacci Series is
"

f=0
n=1
	for ((i=0;i<len;i++))
	do
		echo -n "
$f"
		fn=$(($f + $n))
		f=$n
		n=$fn
	done
}

fibonacci
