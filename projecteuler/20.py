# https://projecteuler.net/problem=20

import math

number = math.factorial(100)

digits_sum = sum([int(k) for k in str(number)])

print(digits_sum)
