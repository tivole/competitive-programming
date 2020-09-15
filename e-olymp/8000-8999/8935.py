# (c) Tivole

# 8935

a, b = list(map(int, input().split()))

for i in range(a, b+1):
    if i % 2 == 1:
        if i == b or i == b-1:
            print(i, end='')
        else:
            print(i, end=' ')
