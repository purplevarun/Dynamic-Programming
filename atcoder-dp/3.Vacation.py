N = int (input())
A = [None for i in range (N)] 
B = [None for i in range (N)] 
C = [None for i in range (N)]
for i in range (N):
    A[i], B[i], C[i] = [int(x) for x in input().split()]
dp = []

# for the first dp element
val = max (A[i], B[i], C[i])
act = None
if val == A[i] : act = 'A'
elif val == B[i] : act = 'B'
else : act = 'C'
dp.append((val,act))     

for i in range (1,N):
    elements = sorted([A[i],B[i],C[i]])
    val = elements[-1] 
    act = None
    if val == A[i] : act = 'A'
    elif val == B[i] : act = 'B'
    else : act = 'C'
    
    if act == dp[i-1][1]:
       val = elements[-2]
    
    if val == A[i] : act = 'A'
    elif val == B[i] : act = 'B'
    else : act = 'C'

    dp.append((val,act))

print (dp)
