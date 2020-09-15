# (c) Tivole

# 5327

sequence = input().strip()

while "()" in sequence:
    sequence = sequence.replace("()", "")

if len(sequence) == 0:
    print("YES")
else:
    print("NO")