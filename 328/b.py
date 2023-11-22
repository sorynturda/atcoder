def f(x):
    a = []
    while x:
        a.append(x % 10)
        x //= 10
    a = set(a)
    return len(a) == 1


n = int(input())
a = [int(x) for x in input().split()]
res = 0
for i in range(n):
    if f(i + 1) == False:
        continue
    day = 1
    while(day <= a[i]):
        if f(day) == True and (i + 1) % 10 == day % 10:
            res += 1
        day += 1
print(res)
