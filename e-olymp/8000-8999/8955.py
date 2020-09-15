# (c) TIvole

# 8955

n = int(input())

l = list(map(int, input().split()))

a = []

for i in l:
    if i > 0:
        a.append(i)

if len(a) > 0:
    print(len(a))
    print(' '.join(map(str, a)))
else:
    print('NO')

