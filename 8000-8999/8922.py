# (c) Tivole

# 8922

i = abs(int(input()))

if i == 0:
    print(1)
else:
    k = 0
    while i != 0:
        k += 1
        i //= 10

    print(k)
