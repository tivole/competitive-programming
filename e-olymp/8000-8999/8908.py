# (c) Tivole

# 8908

i = int(input())

k = 0
while i != 0:
    k += 1
    i //= 10

print("9" * (k-1))