# (c) Tivole

# 4730

import math

n = int(input())
n += 1

phi_1 = (1 + math.sqrt(5))/2
phi_2 = (1 - math.sqrt(5))/2

ans = (phi_1**n - phi_2**n)/math.sqrt(5)

print(round(ans))