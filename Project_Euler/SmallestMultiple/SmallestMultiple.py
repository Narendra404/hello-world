import math
n = 1
for i in range(1, 21) :
    n = (n * i) // int(math.gcd(n, i))
print(n)
