t = int(input())
for i in range(t):
    a, b = map(int, input().split())
    d = abs(a - b)
    if d % 10 == 0:
        x = 0
    else :
        x = 1 
    count = d // 10 + x
    print(count)
