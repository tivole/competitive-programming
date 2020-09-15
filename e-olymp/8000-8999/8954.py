# (c) Tivole

# 8954

n = int(input())

a = []

for i in range(n):
    a.append(int(input()))

b = a[::-1]

print(' '.join(map(str, b)))
