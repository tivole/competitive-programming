# https://www.hackerrank.com/challenges/bash-tutorials---compute-the-average/problem

read n
arr=($(cat)) 
arr=${arr[*]}
printf "%.3f" $(echo $((${arr// /+}))/$n | bc -l)
