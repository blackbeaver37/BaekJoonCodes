num = list(range(9))
max_index = 0
for i in range(9):
    num[i] = int(input())
    if num[i] > num[max_index]:
        max_index = i
print(num[max_index])
print(max_index+1)