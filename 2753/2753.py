year = int(input())
ck = 0
if year % 4 == 0:
    ck = 1;
if year % 100 == 0:
    ck = 0;
if year % 400 == 0:
    ck = 1;
print(ck)