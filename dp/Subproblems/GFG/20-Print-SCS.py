# https://leetcode.com/problems/shortest-common-supersequence/
def SCS (A, B):
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

	scs = ""

	i = N; j = M
	while i>0 and j>0:
		if A[i-1] == B[j-1]:
			scs += A[i-1]
			i -= 1
			j -= 1
		else :
			if dp[i-1][j] > dp[i][j-1]:
				scs += A[i-1]
				i -= 1
			else :
				scs += B[j-1]
				j -= 1
	while i > 0:
		scs += A[i-1]
		i-=1
	while j > 0:
		scs += B[j-1]
		j-=1
	return scs[::-1]
if __name__ == '__main__':
	A = 'abac'
	B = 'cab'

	Ans = SCS (A, B)
	print (Ans)
