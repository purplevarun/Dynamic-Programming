bool EqualSumPartition (A):
    if sum(A)%2!=0:
        return False
    half = sum(A)//2
    
A = [1,5,11,5]
print (EqualSumPartition(A))
