# (c) Tivole

# 8920

i = int(input())

k = 0

x = 1
while k != i:
    if x % 2 != 0 and x % 3 != 0 and x % 5 != 0:
        k += 1
        if k == i:
            print(x, end='')
        else:
            print(x, end=' ')
    x += 1
        
