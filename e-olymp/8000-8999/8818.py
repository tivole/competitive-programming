# (c) Tivole

# 8818

n = int(input())

if n == 1:
    ans = 5
else:
    ans = 9 * 10**(n-1) // 2

print(ans)