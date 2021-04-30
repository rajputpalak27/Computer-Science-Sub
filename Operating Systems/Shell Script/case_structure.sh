#! /bin/bash

echo "Folowing opeartions can be performed:
1. Add
2. Subtract
3. Mutilplay
4. Dvide
5. Modulous
6. Quit
"
while true;
do
echo "
Enter Your Preference : "
read ch

case $ch in

	1)echo "Enter the two numbers you want to perform operations on :
          "
          read n1
          read n2

	  res=`expr $n1 + $n2`
          echo "Addditon is: $res"
          ;;

        2)echo "Enter the two numbers you want to perform operations on :
          " 
          read n1
          read n2
          res=`expr $n1 - $n2`
          echo "Subtraction is: $res"
          ;;

          
        3)echo "Enter the two numbers you want to perform operations on :
          "
          read n1
          read n2

          res=`expr $n1 "*" $n2`
          echo "The Multiplication is: $res"
          ;;

        4)echo "Enter the two numbers you want to perform operations on :
         "
         read n1
         read n2

	 res=`expr $n1 / $n2`
         echo "The Division is: $res"
         ;;

        5)echo "Enter the two numbers you want to perform operations on :
          "
          read n1
          read n2

	  res=`expr $n1 % $n2`
          echo "The Modulous is: $res"
          ;;

        6)exit 1;;

        *)echo "invalid Choice"
                ;;
esac
done
~                                                                                                                                                                                                          
~                                                                                                                                                                                                          
~                                                                                                                                                                                                          
                                                                                                         
