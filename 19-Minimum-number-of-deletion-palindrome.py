import numpy as np
def lcs(A,B):
	N = len(A)
	M = len(B)
	dp = [[0 for i in range (M+1)] for j in range (N+1)]
	dp = np.array(dp)
	for i in range (1,N+1):
		for j in range (1,M+1):
			if A[i-1] == B[j-1]:
				dp[i][j] = dp[i-1][j-1] + 1
			else :
				dp[i][j] = max (
							dp[i-1][j],
							dp[i][j-1]
						)
	return dp[N][M]
def lps(S):
	return lcs (S,S[::-1])
S = "agbcba"
print (len(S) - lps(S))
