# https://www.hackerrank.com/challenges/python-mutations/problem


def mutate_string(string, position, character):
    list_string = list(string)
    list_string[position] = character
    return "".join(map(str, list_string))
