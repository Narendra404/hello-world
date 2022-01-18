t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    a = sorted(a)
    flag = 0
    while flag == 0:
        kill = 0
        for j in range(n - 1):
            x = a[j + 1] - a[j]
            if x == 0 or x == 1:
                a.pop(j)
                kill = 1
                n = n - 1
                break
        if len(a) == 1:
            print("YES")
            break
        if kill == 0:
            print("NO")
            break
