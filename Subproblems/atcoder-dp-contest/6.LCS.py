# https://atcoder.jp/contests/dp/tasks/dp_f
def LCS(A,B):
	N = len (A); M = len (B)
	dp = [[None for i in range (M+1)] for j in range (N+1)]

	for i in range (N+1):
		for j in range (M+1):
			if i == 0 or j == 0:
				dp[i][j] = 0 # if length of A or B = 0

	for i in range (1,N+1):
		for j in range (1,M+1):
			if A[i-1] == B[j-1]:
				dp[i][j] = dp[i-1][j-1] + 1

			else :
				dp[i][j] = max (
					dp[i-1][j],
					dp[i][j-1]
				)
	# up until here is normal LCS, now we need to print it

	ans = ""
	i = N; j = M
	while i > 0 and j > 0:
		if A[i-1] == B[j-1]:
			ans += A[i-1]
			i -= 1
			j -= 1
		else :
			if dp[i-1][j] > dp[i][j-1]:
				i -= 1
			else :
				j -= 1

	ans = ans[::-1]
	return ans
A = input(); B = input()
print (LCS(A,B))