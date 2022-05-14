def ispal(n) :
    s = str(n)

    if (s[::-1] == s) :
        return True
    else :
        return False

l = list()
for i in range (999, 1, -1) :
    for j in range (999, 1, -1) :
        p = i * j
        if (ispal(p) == True) :
            l.append(p)

print(max(l))
