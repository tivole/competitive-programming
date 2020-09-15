# (c) Tivole

# 8934

a, b = list(map(int, input().split()))

for i in range(b, a-1, -1):
    print(i, end='')
    if i != a:
        print(end=' ')

