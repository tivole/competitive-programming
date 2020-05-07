# (c) Tivole

# 9627 (unsolved)

n = int(input())

for i in range(n):
    a, b, c = list(map(int, input().split()))

    print(a**(b**c % (10**9 + 7)) % (10**9 + 7))
