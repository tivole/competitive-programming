# (c) Tivole

# 8958

n = int(input())
a = list(map(int, input().split()))

k = 0
b = []

for i in range(len(a)):
    if i % 2 == 1:
        k += 1
        b.append(a[i])

if k > 0:
    print(k)
    print(' '.join(map(str, b)))
else:
    print('NO')
