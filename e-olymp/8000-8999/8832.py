# (c) Tivole

# 8832

f = lambda x, y: (x**2 - 2*x*y + 4*y**2) / (x+5) + (3*x**2 - y**2) / (y - 7)

x, y = list(map(float, input().split()))
print('{:.3f}'.format(f(x, y)))