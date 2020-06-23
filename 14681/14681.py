x = int(input())
y = int(input())
quad = 0
if x * y > 0:
    if x > 0:
        quad = 1
    else:
        quad = 3
else:
    if x > 0:
        quad = 4
    else:
        quad = 2
print(quad)