# (c) Tivole

# 8911

i = int(input())

k = 0
while i != 0:
    if i < 0:
        k += 1
    i = int(input())

print(k)