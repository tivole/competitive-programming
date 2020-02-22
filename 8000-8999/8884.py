# (c) Tivole

# 8884

a, b, c = list(map(int, input().split()))

if a + b > c and a + c > b and c + b > a:
    if a == b and b == c:
        print('equilateral')
    elif a == b or a == c or b == c:
        print('isosceles')
    else:
        print('versatile')
else:
    print('invalid')