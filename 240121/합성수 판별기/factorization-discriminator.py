def isprime(n):
    i = 2
    while i ** 2 <= n:
        if n % i == 0:
            return False
        i += 1
    return True    

n = int(input())

if isprime(n):
    print("N")
else:
    print("C")