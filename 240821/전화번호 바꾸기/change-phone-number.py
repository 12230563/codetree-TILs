x = list(input())
temp = x[8:]
x[8:] = x[3:8]
x[3:8] = temp
for i in x:
    print(i, end='')