p1 = 2000
p2 = 2000
for i in range(0, 3):
    tmp = int(input())
    if p1 > tmp:
        p1 = tmp
for i in range(0, 2):
    tmp = int(input())
    if p2 > tmp:
        p2 = tmp
print(p1+p2-50)