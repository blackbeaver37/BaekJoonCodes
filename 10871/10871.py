n, x = input().split(" ")
t = list(map(int, input().split()))
for i in t:
    if i<int(x):
        print(str(i)+' ', end="")