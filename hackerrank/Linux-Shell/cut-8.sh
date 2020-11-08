# https://www.hackerrank.com/challenges/text-processing-cut-7/problem

while read line
do
    echo $line | cut -d ' ' -f1-3
done
