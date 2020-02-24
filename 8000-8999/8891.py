# (c) Tivole

# 8891

i = int(input())

if abs(i) % 2 == 0:
    if (i < 0 and abs(i) % 3 == 0):
        print('NO')
    else:
        print('YES')
elif (i < 0 and abs(i) % 3 == 0):
    if abs(i) % 2 == 0:
        print('NO')
    else:
        print('YES')
else:
    print('NO')