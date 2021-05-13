N, K = [int(X) for X in input().split()]
A = [int(X) for X in input().split()]

dp = [1e9 for i in range (N)]
dp[0] = 0
dp[1] = abs (A[1] - A[0])
for i in range (2,N):
	for j in range (1,i+1):
		dp[i] = min (dp[i-j]+)