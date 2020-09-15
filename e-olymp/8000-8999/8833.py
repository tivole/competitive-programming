# (c) Tivole

# 8833

f = lambda x, y: (2*x + y) / (x**2 - x*y + 4*y**2) + (2*x**2 - x*y + y**2) / (x + 4*y)

x, y = list(map(float, input().split()))
print('{:.3f}'.format(f(x, y)))