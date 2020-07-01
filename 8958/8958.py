t = int(input())
for i in range(t):
    answer = input()
    score = 0
    tmp = 0
    for j in range(len(answer)):
        if answer[j] == 'O':
            tmp += 1
            score += tmp
        else:
            tmp = 0
    print(score)