def subsetSum (A,Sum):
    N = len (A)
    dp = ([None]*(N+1))*(Sum+1)
    
def EqualSumPartition (A):
    if sum(A)%2!=0:
        return False
    return subsetSum(A,sum(A)//2)

A = [1,5,11,1111]
print (EqualSumPartition(A))
