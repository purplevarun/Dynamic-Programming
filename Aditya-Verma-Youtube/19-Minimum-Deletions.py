# https://practice.geeksforgeeks.org/problems/minimum-deletitions1648/1
def LCS (A,B):
	N = len(A)
	M = len(B)
	dp = [[0 for i in range (M+1)] for j in range (N+1)]
	for i in range (1,N+1):
		for j in range (1,N+1):

def LPS (S):
	return LCS(S,S[::-1])
if __name__ == '__main__':
	S = "AEBCBDA"
	print (LPS(S))