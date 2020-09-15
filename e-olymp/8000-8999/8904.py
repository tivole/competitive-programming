# (c) Tivole

# 8904

i = int(input())

k = 0

while i > 2**k:
    k += 1

print(2**(k-1))