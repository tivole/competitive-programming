# (c) Tivole

# 8926

i = int(input())

k = 0
ans = 0
while i != 0:
    a = i % 10
    if a % 2 == 0:
        a += 1
    else:
        a -= 1

    ans += (a*10**k)
    k += 1

    i //= 10

print(ans)
