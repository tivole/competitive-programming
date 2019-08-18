# (c) Tivole

# 620

n = int(input())

a = []
b = []

for i in range(0, 10):
    if i is not 0 and i is not 8:
        a.append(1)
    else:
        a.append(0)
    b.append(0)

for i in range(0, n-1):
    b[0] = a[4] + a[6]
    b[1] = a[6] + a[8]
    b[2] = a[7] + a[9]
    b[3] = a[4] + a[8]
    b[4] = a[0] + a[3] + a[9]
    b[5] = 0
    b[6] = a[0] + a[1] + a[7]
    b[7] = a[2] + a[6]
    b[8] = a[1] + a[3]
    b[9] = a[2] + a[4]

    a[:] = b

sum = 0
for i in range(0, 10):
    sum += a[i]

print(sum)