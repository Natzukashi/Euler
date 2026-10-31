b = 1
c = 1
summ = 0

while (c < 4000000):
    if c % 2 == 0:
        summ += c
    c, b = c + b, c

print(summ)

