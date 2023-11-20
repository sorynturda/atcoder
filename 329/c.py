n = int(input())
s = input()
d = {c: 0 for c in list(map(chr, range(97, 123)))}
l = 1
if n == 1:
    d[s[0]] = l
for i in range(1, n):
    if s[i] == s[i - 1]:
        l += 1
    else:
        l = 1
    if l > d[s[i]]:
        d[s[i]] = l
res = 0
for (k, v) in d.items():
    res += v
print(res)
