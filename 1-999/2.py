# (c) Tivole

# 2

num = int(input())
i = 1 if not num else 0
while num:
    i+=1
    num //= 10
print(i)