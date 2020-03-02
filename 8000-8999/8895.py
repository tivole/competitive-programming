# (c) Tivole

# 8895

a, b, c = list(map(int, input().split()))

if a > 0 or b > 0 or c > 0:
    if a < 0 or b < 0 or c < 0:
        print('YES')
    else:
        print('NO')
else:
    print('NO')