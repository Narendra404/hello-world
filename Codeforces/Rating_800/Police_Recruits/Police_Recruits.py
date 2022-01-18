n = int(input())

arr = list(map(int, input().split()))

crime = 0
police = 0

for i in range(n):

    if arr[i] == -1:

        if police == 0:
            crime = crime + 1
        else:
            police = police - 1

    else:
        police = police + arr[i]

    i = i + 1

print(crime)
