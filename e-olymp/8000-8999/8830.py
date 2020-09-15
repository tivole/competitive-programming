# (c) Tivole

# 8830

import math

y = lambda x: (math.sqrt(x**4 + 1))/(x**2) - math.sqrt((x**2) / (x**2 + 1))

x = float(input().strip())
print('{:.3f}'.format(y(x)))