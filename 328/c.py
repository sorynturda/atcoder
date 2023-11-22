n, q = map(int, input().split())
s = input()
dp = [0 for x in range(n)]
for i in range(1, n):
    dp[i] = dp[i - 1]
    if s[i] == s[i - 1]:
        dp[i] += 1
for i in range(q):
    l, r = map(int, input().split())
    print(dp[r-1]-dp[l-1])