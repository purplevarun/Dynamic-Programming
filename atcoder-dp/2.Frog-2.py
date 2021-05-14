N, K = [int(X) for X in input().split()]
A = [int(X) for X in input().split()]
dp = [1e9 for i in range (N)]
dp[0] = 0

for i in range (1,N):
	j = i - 1
	jump = 0
	while j >= 0 and jump < K:
		dp[i] = min (
			dp[i],
			dp[j] + abs (A[i] - A[j])
		)
		j -= 1
		jump += 1
print (dp[-1])
