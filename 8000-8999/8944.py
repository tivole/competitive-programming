# (c) Tivole

# 8944

n = int(input())

print('*'*n)

for i in range(n-2):
    print(f'*{" " * (n-2)}*')

if n > 1:
    print('*'*n)
