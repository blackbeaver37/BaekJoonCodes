n = int(input())
max = 0
sum = 0
score = list((input().split(' ')))
for i in range(n):
    if int(score[i]) > max:
        max = int(score[i])
for i in range(n):
    sum += int(score[i])/max * 100
print(sum/n)