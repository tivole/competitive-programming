# https://www.hackerrank.com/challenges/text-processing-cut-5/problem

IFS=""
while read line; do
  echo -e "$line" | cut -f -3
done
