# (c) Tivole

# 8893

i = int(input())

if abs(i) % 3 == 0 and abs(i) % 2 == 0 and abs(i) < 100 and abs(i) > 9:
    print('YES')
else:
    print('NO')