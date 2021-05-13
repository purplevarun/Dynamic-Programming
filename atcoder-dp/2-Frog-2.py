N, K = [int(X) for X in input().split()]
A = [int(X) for X in input().split()]

dp = [1e9 for i in range (N)]
dp[0] = 0

for i in range (1,N):
	for j in range (1,K+1):