# https://www.hackerrank.com/challenges/bash-tutorials---arithmetic-operations/problem 

read num
echo $num | bc -l | xargs printf "%.3f"
