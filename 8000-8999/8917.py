# (c) Tivole

# 8917

i = int(input())

k = 1
while 2**k < i:
    print(2**k, end='')
    if 2**(k+1) < i:
        print(end=' ')
    k += 1
