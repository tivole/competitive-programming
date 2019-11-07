# (c) Tivole

# 8836

f = lambda x, y: (x-y)**2 / (x**2 + y**2 - 1)**(1/2) + (x**2 + y**2 - 1)**(1/2) / (2*x*y)

x, y = list(map(float, input().split()))
print('{:.3f}'.format(f(x, y)))