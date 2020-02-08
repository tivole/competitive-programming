# (c) Tivole

8869

x, y = list(map(int, input().split()))

print((str(x) + " " + str(y)) if x < y else (str(y) + " " + str(x)))