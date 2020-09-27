# https://www.hackerrank.com/challenges/capitalize/problem


def solve(string):
    return " ".join(i.capitalize() for i in string.split(" "))
