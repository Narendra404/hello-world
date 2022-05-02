
n = int(input())
sumofsq = int((n * (n + 1) * (2 * n + 1)) / 6)
sqofsum = int(pow(((n * (n + 1)) / 2), 2))
print(sqofsum - sumofsq)
