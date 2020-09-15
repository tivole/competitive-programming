# (c) Tivole

# 8900

i = int(input())

k = 0

if i >= 0:
    while i >= k*7:
        k+=1
else:
    k = -1
    while i <= k*7:
        k-=1
    k+=1

print(k*7)