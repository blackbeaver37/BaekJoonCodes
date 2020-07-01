n = int(input())
i = 1
flag = 1
while True:
    for j in range(0, i):
        print('*', end='')
    if i == n:
        flag = -1
    i += flag
    if i == 0:
        break
    print()