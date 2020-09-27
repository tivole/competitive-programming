# https://www.hackerrank.com/challenges/bash-tutorials---getting-started-with-conditionals/problem

read c

if [ $c == 'y' ]
then 
    echo 'YES'
elif [ $c == 'Y' ]
then
    echo 'YES'
elif [ $c == 'n' ]
then
    echo 'NO'
elif [ $c == 'N' ]
then
    echo 'NO'
fi
