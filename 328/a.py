n, x = map(int, input().split())
a = [int(x) for x in input().split()]
a.sort()
res = 0
for s in a:
    if  s <= x:
        res += s
print(res)