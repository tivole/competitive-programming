# (c) Tivole

# 8829

import math

y = lambda x: (2*x)/math.sqrt(x**2 + 1) - math.sqrt(x**2 + 1) / x**3

x = float(input().strip())
print('{:.3f}'.format(y(x)))