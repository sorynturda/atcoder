n = int(input())
a = [int(x) for x in input().split()]
ans = 0
for x in a:
    if x != max(a):
        ans = max(ans,x)
print(ans)