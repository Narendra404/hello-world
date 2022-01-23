a, b = map(int, input().split())
count = 1
while ((a * count) - b) % 10 != 0 and (a * count) % 10 != 0:
    count += 1
print(count)
