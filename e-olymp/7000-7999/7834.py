# (c) Tivole

# 7834

n = int(input())
numbers = list(map(int, input().split()))
numbers.sort()
print(numbers[n-1] + numbers[n-2])