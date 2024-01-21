a, b, c = list(map(int,input().split()))


cout = 0

def ismultiple(n1,n2,n3):
    for i in range(n1,n2+1):
        if i % n3 == 0:
            cout += 1            
        else:
            pass
    if cout == 0:
        return True
    else:
        return False            

if ismultiple(a,b,c):
    print("YES")
else:
    print("NO")