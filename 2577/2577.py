integer = [0 for i in range(10)]
n = 1
for i in range(3):
    n *= int(input())
while n != 0:
    integer[n%10] += 1
    n //= 10
for i in range(10):
    print(integer[i])