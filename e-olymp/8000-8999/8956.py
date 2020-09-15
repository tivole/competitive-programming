# (c) TIvole

# 895a

n = int(input())

l = list(map(int, input().split()))

a = []

for i in l:
    if i < 0:
        a.append(i)

if len(a) > 0:
    print(len(a))
    print(' '.join(map(str, a[::-1])))
else:
    print('NO')

