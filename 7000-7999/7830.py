# (c) Tivole

# 7830

n = int(input())
numbers = list(map(int, input().split()))
numbers.sort()
print(numbers[n-1])