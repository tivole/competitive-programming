# https://projecteuler.net/problem=13

with open("13.txt") as f:
    numbers_sum = sum([int(line.rstrip()) for line in f])

first_ten_digits = str(numbers_sum)[:10]

print(first_ten_digits)
