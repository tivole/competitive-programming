# (c) Tivole

# 8882

a, b, c, d = list(map(int, input().split()))

if a == b and b == c and c == d:
    print(a**2)
else:
    print('No')