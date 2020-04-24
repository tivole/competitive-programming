# (c) Tivole

# 8925

i = int(input())

flag = False
ans = 1
while i != 0:
    if i % 10 % 2 == 1: 
        ans *= i % 10
        flag = True

    i //= 10

if not flag:
    print(-1)
else:
    print(ans)
