numbers = list(map(int,input().split()))
cout = 0

for i in numbers:
    if i % 3 == 0:
        pass
    else:
        cout += 1

print(1 if cout == 0 else 0)