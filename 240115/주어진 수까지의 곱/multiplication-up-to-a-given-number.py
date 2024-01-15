a, b = map(int,input().split())
temp = 1

for i in range(a,b+1):
    temp *= i

print(temp)