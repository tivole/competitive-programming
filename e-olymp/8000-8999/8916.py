# (c) Tivole

# 8916

i = int(input())

k = 2
j = 0
while j != i:
    print(k, end='')
    if j + 1 != i:
        print(end=' ')
    k += 2
    j += 1