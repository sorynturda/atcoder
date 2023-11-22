s = input()
res = ""
t = [None] * len(s)
j = -1
for c in s:
    if j == -1 and c != 'A':
        res += c
    else:
        j += 1
        t[j] = c
    if j > 1 and t[j - 2] == "A" and t[j - 1] == "B" and t[j] == "C":
        j -= 3
for i in range(j+1):
    if t[i] != None:
        res += t[i]
print(res)
