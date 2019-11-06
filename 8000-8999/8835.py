# (c) Tivole

# 8835

f = lambda x, y: (x**2 + y**2)**(1/2) / (x - y)**2 - 2*x*y / ((x**2 + y**2)**(1/2))

x, y = list(map(float, input().split()))
print('{:.3f}'.format(f(x, y)))