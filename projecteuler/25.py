# https://projecteuler.net/problem=25

a = 1
b = 1

i = 3

while len(str(b)) != 1000:
    a, b = b, a + b
    i += 1

print(i - 1)
