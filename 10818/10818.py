n = int(input())
num = list(input().split(' '))
min = 1000000
max = -1000000
for i in range(n):
    if int(num[i]) < min:
        min = int(num[i])
    if int(num[i]) > max:
        max = int(num[i])
print(str(min)+' '+str(max))