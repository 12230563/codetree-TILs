a, b, c = list(map(int,input().split()))


def ismultiple(n1,n2,n3):
    for i in range(n1,n2+1):
        if i % n3 == 0:
            return False
        else:
            return True

if ismultiple(a,b,c):
    print("YES")
else:
    print("NO")