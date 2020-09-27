# https://www.hackerrank.com/challenges/finding-the-percentage/problem

if __name__ == "__main__":
    n = int(input())

    students = []
    for i in range(n):
        student = list(map(str, input().split()))
        students.append(student)

    std = input()

    for st in students:
        if st[0] == std:
            ans = (float(st[1]) + float(st[2]) + float(st[3])) / 3
            print("{:.2f}".format(ans))
            break
