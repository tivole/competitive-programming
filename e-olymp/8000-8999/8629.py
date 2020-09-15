# (c) Tivole

# 8629

num = input().strip()

for c in num:
    if int(c) % 2 == 1:
        print('YES')
        break
else:
    print('NO')