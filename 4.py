best = 0

for a in range(100, 1000):
    for b in range(a, 1000):
        p = a * b
        if p > best and str(p) == str(p)[::-1]:
            best = p

print(best)
