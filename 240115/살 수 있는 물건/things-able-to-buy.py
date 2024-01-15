n = int(input())

book = 3000
mask = 1000

if n < mask:
    print("no")
elif n < book:
    print("mask") 
else:
    print("book")