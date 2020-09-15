# (c) Tivole

# 8928

i = int(input())

k = 2

while i % k != 0 and k < i**(1/2):
    k += 1

if i % k != 0:
    print(1)
else:
    k = i - 1

    while i % k != 0:
        k -= 1

    print(k)
