# (c) Tivole

# 8919

i = int(input())

k = 1
while k**3 < i:
    print(k**3, end='')

    if (k+1)**3 < i:
        print(end=' ')
    k += 1
