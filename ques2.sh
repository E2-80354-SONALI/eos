
: '
Write a shell script to display menu like “1. Date, 2. Cal, 3. Ls, 4. Pwd, 5. Exit” and
execute the commands depending on user choice.
'
while [ true ]
do
echo -n -e "1.date\n2.cal\n3.ls\n4.pwd\n5.exit\n"
echo -n "Enter the choice:"
read choice

#echo -n -e "1.date\n2.cal\n3.ls\n4.pwd\n5.exit\n" 
case $choice in 
	1)   date
	     ;;
	2)
		 cal 2023
		
		;;
	3)echo "For directory structure:"
	     ls
		 ;;
	4)echo "For current directory:"
	     pwd
		 ;;
    5)echo "For exit:"
	     exit

esac
done
