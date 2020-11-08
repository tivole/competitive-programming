# https://www.hackerrank.com/challenges/text-processing-cut-4/problem

while read line
do
    echo $line | cut -c1-4
done
