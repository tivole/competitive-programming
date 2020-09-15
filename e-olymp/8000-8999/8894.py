# (c) Tivole

# 8894

i = int(input())

if ((i > 0) and (abs(i) % 2 == 0)) or ((i < 0) and (abs(i) % 2 != 0)):
    print('NO')
else:
    print('YES')