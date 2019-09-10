# (c) Tivole

# 7842

n = int(input())
numbers = list(map(int, input().split()))

numbers[:] = numbers[::2]

for i in range(len(numbers)):
    if i == len(numbers) - 1:
        print(numbers[i], end='\n')
    else:
        print(numbers[i], end=' ')
