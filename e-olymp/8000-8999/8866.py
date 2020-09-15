# (c) Tivole

# 8866

n, m = list(map(int, input().split()))

print("1" if abs(n) % abs(m) == 0 else "0")