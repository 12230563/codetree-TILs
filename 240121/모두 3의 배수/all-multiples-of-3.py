def input_list():
    num = []
    while True:
        input_data = input()
        if input_data:
            num.append(int(input_data))
        else:
            break
    return num

numbers = input_list()

cout = 0

for i in numbers:
    if i % 3 == 0:
        pass
    else:
        cout += 1

print(1 if cout == 0 else 0)