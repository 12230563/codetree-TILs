n, k, T = map(str, input().split())

n = int(n)
k = int(k)

str1 = []
str2 = []

for i in range(n):
    str1.append(input())
    if T in str1[i]:
        str2.append(str1[i])

str2.sort()

print(str2[k - 1])