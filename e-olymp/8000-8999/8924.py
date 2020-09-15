# (c) Tivole

# 8924

i = int(input())

flag = False
ans = 0
while i != 0:
    if i % 10 % 2 == 0: 
        ans += i % 10
        flag = True

    i //= 10

if not flag:
    print(-1)
else:
    print(ans)
