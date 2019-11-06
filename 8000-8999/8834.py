# (c) Tivole

# 8834

f = lambda x, y: 2*x*y / (x**2 + y**2)**(1/2) - (x + y -1)**2/(x*y)

x, y = list(map(float, input().split()))
print('{:.3f}'.format(f(x, y)))