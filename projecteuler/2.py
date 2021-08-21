# https://projecteuler.net/problem=2

num_sum = 0
a = 1
b = 2

while b < 4000000:
    if b % 2 == 0:
        num_sum += b
    a, b = b, a+b

print(num_sum)
