# (c) Tivole

# 8865

x, y = list(map(int, input().split()))

print("1" if abs(x) % 2 == abs(y) % 2 else "0")