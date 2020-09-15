# (c) Tivole

# 8945

n, m = list(map(int, input().split()))

if n != 0 and m != 0:
    print('*' * m)

    for i in range(n-2):
        if m > 2:
            print(f'*{" " * (m-2)}*')
        else:
            print('*' * m)

    if n > 1:
        print('*' * m)
