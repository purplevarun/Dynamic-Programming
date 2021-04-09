def subsetSum (A,Sum):
    N = len (A)
    dp = ([None]*(N+1))*(Sum+1)
    for i in range (Sum+1):
        for j in range (N+1):
            if j == 0:
                dp[i][j] = False
            if i == 0:
                dp[i][j] = True
    
def EqualSumPartition (A):
    if sum(A)%2!=0:
        return False
    return subsetSum(A,sum(A)//2)

A = [1,5,11,5]
print (EqualSumPartition(A))
