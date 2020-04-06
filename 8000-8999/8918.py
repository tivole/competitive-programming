# (c) Tivole

# 8918

i = int(input())
i += 1

k = 1
while k != i:
    print(k**2, end='')

    if k != i-1:
        print(end=' ')
    k += 1
