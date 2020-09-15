# (c) Tivole

# 8941

n, m = list(map(int, input().split()))

for i in range(n):
    for j in range(m):
        print(i*m + (j+1), end='')
        if j == m-1:
            print()
        else:
            print(end=' ')
