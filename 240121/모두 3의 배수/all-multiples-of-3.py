def input_list():
    num = []
    for i in range(5):
        input_data = input()
        num.append(int(input_data))

    return num

numbers = input_list()

count = 0

for i in numbers:
    if i % 3 == 0:
        pass
    else:
        count += 1

print(1 if count == 0 else 0)