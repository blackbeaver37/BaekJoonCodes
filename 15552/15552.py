import sys
t = int(input())
for i in range(0, t):
    n = list(map(int, sys.stdin.readline().split(" ")))
    n1 = int(n[0])
    n2 = int(n[1])
    print(n1+n2)
