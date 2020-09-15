# (c) Tivole

# 8936

a, b = list(map(int, input().split()))

for i in range(b, a-1, -1):
    if i % 2 == 0:
        if i == a-1 and i % 2 == 0:
            print(i, end='')
        elif i == a-2 and i % 2 == 0:
            print(i, end='')
        else:
            print(i, end=' ')
