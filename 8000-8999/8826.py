# (c) Tivole

# 8826

y = lambda x: x - (x**2 + 4)/2 + x**3 - 3/(x + 7)

x = float(input().strip())
print('{:.3f}'.format(y(x)))