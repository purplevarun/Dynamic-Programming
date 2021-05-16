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
	# till here i s basic LCS 
def SCS (A, B):
	return LCS(A,B)
if __name__ == '__main__':
	A = 'abac'
	B = 'cab'

	Ans = SCS (A, B)
	print (Ans)