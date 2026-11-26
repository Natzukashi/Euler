n = 600851475143
a = 2

while True:
    while a * a < n:
        flag = False
        if n % a == 0:
            flag = True
            n = n // a
            break
        a += 1
    if not flag:
        break
    else:
        a = 2

print(n)
