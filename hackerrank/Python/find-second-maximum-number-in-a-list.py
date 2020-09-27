# https://www.hackerrank.com/challenges/find-second-maximum-number-in-a-list/problem

if __name__ == "__main__":
    n = int(input())
    arr = list(map(int, input().split()))

    m = max(arr)

    while arr.count(m) != 0:
        arr.remove(m)

    print(max(arr))
