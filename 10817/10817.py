n1 = 0
n2 = 0
num = list(map(int, input().split(' ')))
for i in range(0, 3):
    if num[i] > n1:
        n2 = n1
        n1 = num[i]
    elif num[i] > n2:
        n2 = num[i]
print(n2)