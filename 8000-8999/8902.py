# (c) Tivole

# 8902

i = int(input())
i+=1

while i % 2 == 0 or i % 3 == 0 or i % 5 == 0:
    i += 1

print(i)