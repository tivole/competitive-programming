# https://www.hackerrank.com/challenges/python-lists/problem


def insert_val(_array, index, val):
    array = _array[:]
    array.insert(index, val)
    return array


if __name__ == "__main__":
    N = int(input())

    a = []
    to_print = []
    for i in range(N):
        command = list(map(str, input().split()))

        if command[0] == "insert":
            a = insert_val(a, int(command[1]), int(command[2]))

        elif command[0] == "remove":
            a.remove(int(command[1]))

        elif command[0] == "append":
            a.append(int(command[1]))

        elif command[0] == "sort":
            a.sort()

        elif command[0] == "pop":
            a.pop()

        elif command[0] == "reverse":
            a.reverse()

        elif command[0] == "print":
            to_print.append(a[:])

    for p in to_print:
        print(p)
