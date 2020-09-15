# (c) Tivole

# 769

x_coordinates = []
y_coordinates = []
x, y = list(map(int, input().split()))
x_coordinates.append(x)
y_coordinates.append(y)
x, y = list(map(int, input().split()))
x_coordinates.append(x)
y_coordinates.append(y)
x, y = list(map(int, input().split()))
x_coordinates.append(x)
y_coordinates.append(y)


for i in range(3):
    if x_coordinates.count(x_coordinates[i]) == 1:
        ans_x = x_coordinates[i]
        break

for i in range(3):
    if y_coordinates.count(y_coordinates[i]) == 1:
        ans_y = y_coordinates[i]
        break

print(ans_x, ans_y)