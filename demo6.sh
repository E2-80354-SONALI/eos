#6. Write a Program to find whether a given year is a leap year or not

echo "Enter the year:"
read year

if [ `expr $year % 4` -eq 0 -a `expr $year % 400` -eq 0 -o `expr $year % 100` -eq 0 ]
then 
	echo "leap year!"
else
	echo "not leap!"
fi
