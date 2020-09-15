# (c) Tivole

# 8878

i = int(input())

if i == 1:
    print("0")
elif i % 10 == 0:
    k = 0
    while i // 10 != 0:
        if i // 100 == 0:
            if i // 10 != 1:
                print("No")
            else:
                print(k+1)
        i //= 10
        k += 1
else:
    print("No")