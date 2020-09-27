# https://www.hackerrank.com/challenges/bash-tutorials---comparing-numbers/problem

read x
read y

if [ $x -eq $y ]
then
    echo "X is equal to Y"
elif [ $x -ge $y ]
then
    echo "X is greater than Y"
else
    echo "X is less than Y"
fi
