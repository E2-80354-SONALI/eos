
: '
1. Write a shell script to display your
LOGIN NAME and HOME directory.
'
echo -n "Enter the path:"
read path

if [ ! -d $path ]
then
	echo "path doesnt exists!"
else
	for a in `ls $path`
	do
		res=`stat -c %U $a`
		echo "User name =$res"
		res1=`~`
		echo "$res1"
	done
fi
