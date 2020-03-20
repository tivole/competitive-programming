# (c) Tivole

# 8901

i = int(input())

k = 0
while i != 0:
    i //= 10
    k += 1

print(10 ** k)