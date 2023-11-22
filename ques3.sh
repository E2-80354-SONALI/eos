
: '
3. Write a shell script to accept the name from the user and check whether user entered
name is file or directory. If name is file display its size and if it is directory display its
contents.
'
echo -n "Enter the file/directory name:"
read name

if [ ! -e $name ]
then 
	echo "Path doesn't exist!"
fi

if [ -d $name ]
then 
	cd $name
	for a in `ls $name`
	do
		ls
	done
fi

if [ -f $name ]
then 
	res=`stat -c %s $name`
	echo "size is:$res"
fi
			


