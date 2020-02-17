# (c) Tivole

# 8881

a, b, c = list(map(int, input().split()))

if (a == b or b == c or c == a) and (a + b > c and b + c > a and a + c > b):
    print(a + b + c)
else:
    print("No")