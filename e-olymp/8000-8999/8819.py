# (c) Tivole

# 8819

n = int(input())

if n == 1:
    ans = 4
else:
    ans = 9 * 10**(n-1) // 2

print(ans)