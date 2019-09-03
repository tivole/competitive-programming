# (c) Tivole

# 314

n = int(input())

for i in range(n):
    a = input()

    if '+' in a:
        b = list(a.split('+'))
        print(int(b[0]) + int(b[1]))
    else:
        b = list(a.split('-'))
        print(int(b[0]) - int(b[1]))
    