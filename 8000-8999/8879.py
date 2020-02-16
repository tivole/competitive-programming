# (c) Tivole

# 8879

a, b, c = list(map(int, input().split()))

if a + b > c and c + b > a and a + c > b:
    print(a + b + c)
else:
    print('No')