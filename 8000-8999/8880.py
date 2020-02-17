# (c) Tivole

# 8880

a, b, c = list(map(int, input().split()))

if a == b and b == c and a == c:
    print(a*a)
else:
    print("No")