# (c) Tivole

# 8905

i = int(input())

k = i - 1
while k % 2 == 0 or k % 3 == 0 or k % 5 == 0:
    k -= 1

print(k)