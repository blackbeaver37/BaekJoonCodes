n = []
rest = []
for i in range(10):
    n.append(int(input()))
    try:
        if(rest.index(n[i]%42)):
            continue
    except ValueError:
        rest.append(n[i]%42)
print(len(rest))