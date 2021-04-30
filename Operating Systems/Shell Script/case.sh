#! /bin/bash

echo "Folowing opeartions can be performed:
1. Add
2. Subtract
3. Mutilplay
4. Dvide
5. Modulous

Enter Your Preference
"
read ch
echo "
Enter the two numbers you want to perform operations on :
"
read n1
read n2

case $ch in
	1)res=`expr $n1 + $n2`
		echo "Addditon is: $res"
		;;

        2)res=`expr $n1-$n2`
                echo "Subtraction is: $res"
		;;

	        2)res=`expr $n1 - $n2`
                echo "The Subtraction is: $res"
                ;;
        3)res=`expr $n1 * $n2`
                echo "The Multiplication is: $res"
                ;;

        4)res=`expr $n1 / $n2`
                echo "The Division is: $res"
                ;;

	5)res=`expr $n1 % $n2`
                echo "The Modulous is: $res"
                ;;

	*)echo "invalid Choice"
		;;
esac

