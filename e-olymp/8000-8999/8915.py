# (c) Tivole

# 8915

i = int(input())

k = 1

while k < i:
    print(k, end='')
    if k + 2 < i:
        print(end=' ')
    k += 2