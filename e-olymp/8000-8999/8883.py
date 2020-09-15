# (c) Tivole

# 8883

a, b, c, d = list(map(int, input().split()))

if (a == b and c == d) or (a == c and b == d) or (a == d and b == c):
    print(a + b + c + d)
else:
    print('No')