# https://www.hackerrank.com/challenges/python-string-split-and-join/problem


def split_and_join(line):
    return "-".join(map(str, line.split()))
