# https://practice.geeksforgeeks.org/problems/minimum-deletitions1648/1
def LCS (A,B):
	N = len(A)
	M = len(B)
	dp = [[0 for i in range (M+1)] for j in range (N+1)]
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
def LPS (S):
	return LCS(S,S[::-1])
if __name__ == '__main__':
	S = "BBBAB"
	print (len(S) - LPS(S))