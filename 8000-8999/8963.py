# (c) Tivole

# 8963

N = int(input())
sequence = list(map(int, input().split()))
min_el = min(sequence)
sequence = [ min_el for _ in range(sequence.count(min_el))] + [i for i in sequence if i != min_el]
print(' '.join(map(str, sequence)))