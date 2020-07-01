sum = 0
for i in range(0, 5):
    tmp = int(input())
    if tmp < 40:
        sum += 40
    else:
        sum += tmp
print(sum//5)