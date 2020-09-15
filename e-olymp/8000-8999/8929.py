# (c) Tivole

# 8929

import math

i = int(input())

def is_prime(a):
    if a % 2 == 0 or a % 3 == 0:
        return 0

    for i in range(5, int(math.sqrt(a)), 2):
        if a % i == 0:
            return 0

    return 1


print(is_prime(i))
