# (c) Tivole

# 8827

y = lambda x: (x**2 + 3*x - 4)/(2*x - 3) - (x + 2)/(x**2 - 5*x + 7)

x = float(input().strip())
print('{:.3f}'.format(y(x)))