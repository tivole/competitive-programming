# (c) Tivole

# 8948

n = int(input())

for i in range(n):
    for j in range(n):
        if i == j:
            print('*', end='')
        elif i + j == (n-1):
            print('*', end='')
        else:
            print(' ',end='')
    print()
