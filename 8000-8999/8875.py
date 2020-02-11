# (c) Tivole

# 8875

i = int(input())

print("Ok" if (abs(i)//10 != 0) and (abs(i)//100 != 0) and (abs(i)//1000 == 0) else "No")