#! /bin/bash

echo "Enter string"
read str

for i in $(seq 0 ${#str});
do
	 revstr=${str:$i:1}$revstr
 done

 echo "The given string is " $str
echo "Its reverse is " $revstr
if [ "$str" = "$revstr" ]; then
        echo "It is a palindrome."
else
        echo "It is not a palindrome."
fi

