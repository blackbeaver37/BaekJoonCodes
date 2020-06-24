num = int(input())
count = 0
n1 = num // 10
n2 = num % 10
while n1*10 + n2 != num or count == 0:
    tmp = n2
    n2 = (n1 + n2) % 10
    n1 = tmp
    count += 1
print(count)