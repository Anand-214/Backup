#to check the usage of CLA 
if [ -e $1 ]
then 
	echo "The file exists"
if [ -S $1 ]
then
    echo "The file is an empty file"
else
    tail -3 $1
fi
else
    echo "The file does not exists"
fi


