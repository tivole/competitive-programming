# (c) Tivole

# 8864

x, y = list(map(int, input().split()))

if x == 0 or y == 0:
    if x == 0 and y == 0:
        print(1)
    else:
        print(0)
elif x * y > 0:
    print(1)
else:
    print(0)