# (c) Tivole

# 8828

import math

y = lambda x: (2*x - 1)/(x**2) + math.sqrt(x**2 + 1) / 2

x = float(input().strip())
print('{:.3f}'.format(y(x)))