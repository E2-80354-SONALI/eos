#5. Write a Program to find the greatest of three numbers

echo -n "Enter the num1 num2 num3:"
read num1 num2 num3

if [ $num1 -gt $num2 ]
then 
	if [ $num1 -gt $num3 ]
	then 
		echo "num1=$num1 is greater!"
	fi
elif [ $num2 -gt $num3 ]
then
	echo "num2 is greater!"
else
	echo "num3 is greater!"
fi
