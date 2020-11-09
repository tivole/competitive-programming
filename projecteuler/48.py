# https://projecteuler.net/problem=48

import math

number = 1000

numbers_sum = sum([n ** n for n in range(1, number + 1)])

last_ten_digits = str(numbers_sum)[-10:]

print(last_ten_digits)
