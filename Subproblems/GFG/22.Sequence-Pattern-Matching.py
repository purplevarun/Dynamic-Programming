# https://leetcode.com/problems/is-subsequence/
# is A a subsequence of B ?
def LCS (A, B):
	N = len (A)
	M = len (B)
	dp = [[0 for i in range (M+1)] for j in range (N+1)]

	for i in range (1, N+1):
		for j in range (1, M+1):
			if A[i-1] == B[j-1]:
				dp[i][j] = dp[i-1][j-1] + 1
			else :
				dp[i][j] = max (dp[i-1][j], dp[i][j-1])
	# till here is basic LCS 
	return dp[N][M]
def isSubsequence(A, B):
	if LCS(A, B) == len (A):
		return True
	return False
A = 'AXY'
B = 'ADXCPY'

print (isSubsequence(A,B))