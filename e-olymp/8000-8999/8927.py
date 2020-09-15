# (c) Tivole

# 8927

i = int(input())

k = 2

while i % k != 0 and k < i**(1/2):
    k += 1

if i % k == 0:
    print(k)
else:
    print(i)
