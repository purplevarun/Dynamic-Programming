# https://atcoder.jp/contests/dp/tasks/dp_e
# not a basic knapsack
N, W = [int(X) for X in input().split()]
wt = [0 for i in range (N)]
val = [0 for i in range (N)]
for i in range (N):
	wt[i], val[i] = [int(X) for X in input().split()]
V = sum (val)
dp = [[1e9 for i in range (V+1)] for j in range (N+1)]

dp [0][0] = 0
dp [0][val[0]] = wt[0]

for i in range (1,N):
    dp[i][0] = 0
    for j in range (1,V+1):
        dp[i][j] = dp[i-1][j]
        dp[i][j] = min (
            dp[i][j],
            wt[i]+dp[i-1][j-val[i]]
        )

answer = None

for i in range (V,-1,-1):
    if dp[N-1][i] <= W:
        answer = i
        break

print (answer)
