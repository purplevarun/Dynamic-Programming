def LCS (A,B):
    N = len(A); M = len(B)
    dp = [[0 for i in range (M+1)] for j in range (N+1)]
    for i in range (1,N+1):
        for j in range (1,M+1):
            if A[i-1] == B[j-1]:
                dp[i][j] = dp[i-1][j-1] + 1
            else :
                dp[i][j] = max (dp[i-1][j], dp[i][j-1])
    i = N; j = M
    answer = ""
    while i>=0 and j>=0:
        if A[i-1]==B[j-1]:
            answer+=A[i-1]
            i-=1
            j-=1
        else :
            if dp[i][j-1]>dp[i-1][j]:
                j-=1
            else :
                i-=1
    answer=answer[::-1]
    return len(answer)

def supersequence_length(A,B):
    N = len(A); M = len(B)
    return N+M-LCS(A,B)
A = "AGGTAB"
B = "GXTXAYB"
print (supersequence_length(A,B))
# print (LCS(A,B))
