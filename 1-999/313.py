# (c) Tivole

# 313

n = int(input())

a = []
for i in range(n):
    a.append(input())

    b = list(a[i].split('+'))
    print(int(b[0]) + int(b[1]))