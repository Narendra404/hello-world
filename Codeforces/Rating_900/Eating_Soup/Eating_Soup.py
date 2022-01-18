import math

n, m = map(int, input().split())

if m == 0:
    print(1)
elif m - 1 < math.floor(n / 2):
    print(m)
elif m + 1 > math.floor(n / 2):
    print(n - m)
