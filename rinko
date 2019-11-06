#!/usr/bin/env bash

for i in $@
do
k=`echo $RANDOM % 6 |bc`
if [ $k -eq 0 ]
then
        echo -n "그... $i.. "
elif [ $k -eq 1 ]
then
        echo -n "$i.. "
elif [ $k -eq 2 ]
then
        echo -n "${i:0:1}, $i.. "
elif [ $k -eq 3 ]
then
        echo -n "$i, "
else
        echo -n "$i "
fi
done
echo -ne "\n"
