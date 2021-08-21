# https://projecteuler.net/problem=1

num_sum = 0

for i in range(1000):
    if i % 3 == 0 or i % 5 == 0:
        num_sum += i

print(num_sum)
