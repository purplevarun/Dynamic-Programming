# https://atcoder.jp/contests/dp/tasks/dp_d
# basic knapsack
N, W = [int(X) for X in input().split()]
wt = [0 for i in range (N)]
val = [0 for i in range (N)]
for i in range (N):
	wt[i], val[i] = [int(X) for X in input().split()]

dp = [[None for i in range (W+1)] for j in range (N+1)]

for i in range (N+1):
	for j in range (W+1):
		if i == 0: # N = 0 (ie) no elements in array
			dp[i][j] = 0
		if j == 0: # wt of element is 0
			dp[i][j] = 0

for i in range (1,N+1):
	for j in range (1,W+1):
		if wt[i-1] <= j:
			dp[i][j] = max (
				dp[i-1][j],
				val[i-1] + dp[i-1][j-wt[i-1]]
			)	
		else :
			dp[i][j] = dp[i-1][j]

print (dp[N][W])