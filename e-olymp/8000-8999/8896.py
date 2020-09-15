# (c) Tivole

# 8896

i = abs(int(input()))

a = i % 10
b = i // 10 % 10
c = i // 100

if a != b and b != c and a != c:
    print('YES')
else:
    print('NO')