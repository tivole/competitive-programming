# https://projecteuler.net/problem=16

number = 2 ** 1000

digits_sum = sum([int(k) for k in str(number)])

print(digits_sum)
