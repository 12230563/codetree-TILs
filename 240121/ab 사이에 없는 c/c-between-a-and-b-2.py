a, b, c = list(map(int,input().split()))


def ismultiple(n1,n2,n3):
    cout = 0
    
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