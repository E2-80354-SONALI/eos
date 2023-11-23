#7. Write a Program to find whether a given number is positive or negative
echo -n "Enter the num:"
read num

if [ $num -lt 0 ]
then 
	echo "negative"
elif [ $num -gt 0 ]
then 
	echo "positive"
else
	echo "num is zero!"
fi
