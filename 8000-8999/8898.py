# (c) Tivole

# 8898

from math import *

i = int(input())

i+=1
while True:
    if int(sqrt(i))*int(sqrt(i)) == int(i):
        print(i)
        break
    i+=1