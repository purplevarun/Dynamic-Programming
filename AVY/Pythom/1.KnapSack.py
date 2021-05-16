import sys
# sys.setrecursionlimit(10**6)
def KnapSack(N, W, wt, val):
	dp = [[None for i in range (W+1)] for j in range (N+1)]

	for i in range (N+1):
		for j in range (W+1):
			if i == 0 or j == 0:
				dp[i][j] = 0

	for i in range (1,N+1):
		for j in range (1,W+1):
			if wt[i-1] <= j:
				dp[i][j] = max(
					dp[i-1][j],
					val[i-1] + dp[i-1][j-wt[i-1]]
				)
			else :
				dp[i][j] = dp[i-1][j]

	return dp[N][W]

if __name__ == '__main__':
	# N = 3
	# W = 50
	# wt = [10,20,30]
	# val = [60,100,120]

	N, W = [int(X) for X in input().split()]

	wt = [None for i in range (N)]
	val = [None for i in range (N)]

	for i in range (N):
		wt[i], val[i] = [int(X) for X in input().split()]

	Ans = KnapSack (N,W,wt,val)

	print (Ans) 	