# (c) Tivole

# 8831

f = lambda x, y: 2*x**2 - 4*x*y + 3*y**2 + (x+y)/7

x, y = list(map(float, input().split()))
print('{:.3f}'.format(f(x, y)))