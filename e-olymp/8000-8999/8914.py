# (c) Tivole

# 8914

i = int(input())

k = 0
while i != 0:
    if abs(i) % 2 == 0:
        k += i
    i = int(input())

print(k)