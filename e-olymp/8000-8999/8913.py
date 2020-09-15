# (c) Tivole

# 8913

i = int(input())

k = 0
while i != 0:
    if abs(i) % 2 != 0:
        k += 1
    i = int(input())

print(k)