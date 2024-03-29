# https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1
# longest repeating subsequence
def LRS (A):
	B = f"{A}"
	N = len (A)
	M = len (B)
	dp = [
		[
			0 for i in range (M+1) # M columns
		]
		for j in range (N+1) # N rows
	]

	for i in range (1, N+1):
		for j in range (1, M+1):
			if A[i-1] == B[j-1] and i != j:
				dp[i][j] = dp[i-1][j-1] + 1
			else :
				dp[i][j] = max (
					dp[i-1][j],
					dp[i][j-1]
				)

	return dp[N][M]

print (LRS("AABEBCDD"))
