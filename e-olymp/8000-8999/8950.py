# (c) Tivole

# 8950

n = int(input())

for i in range(n):
    for j in range(n):
        if i + j < n-1 and j > i:
            print(' ', end='')
        elif i + j > n-1 and j < i:
            print(' ', end='')
        else:
            print('*', end='')
    print()
