num = 20

while True:
    flag = False
    for i in range(2, 21):
        if num % i != 0:
            flag = True
            break

    if not flag:
        break
    num += 20

print(num)
