# (c) Tivole

# 8825

y = lambda x: x**3 - 5*x**2/7 + 9*x - 3/x + 1

x = float(input().strip())
print('{:.3f}'.format(y(x)))