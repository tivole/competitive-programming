# (c) Tivole

# 8932

a, b = list(map(int, input().split()))

for x in range(a, b + 1):
    if x == b:
        print(x)
    else:
        print(x, end=' ')
