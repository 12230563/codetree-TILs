height, weight = map(int,input().split())

BMI = weight/pow(height*(1e-2),2)

if BMI >= 25:
    print(f"{int(BMI)}\nObesity")
else:
    print(BMI)