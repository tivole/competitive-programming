# (c) Tivole

# 8923

i = int(input())

a = []
while i != 0:
    a.append(i%10)
    i //= 10

a = a[::-1]

ans = 0
for i in range(len(a)):
    ans += a[i] * 10 ** i

print(ans)