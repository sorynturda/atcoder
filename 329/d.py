n = input().split()
m = int(n[1])
n = int(n[0])
a = [int(x) for x in input().split()]
H = {x:0 for x in a}
mx = 0
conc = 0
for vote in a:
    H[vote] += 1
    if H[vote] > mx:
        mx = H[vote]
        conc = vote
    elif H[vote] == mx and vote < conc:
        mx=H[vote]
        conc=vote
    print(conc)