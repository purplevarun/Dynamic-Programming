N = int (input())
A = []; B = []; C = []
for i in range (N):
    A[i], B[i], C[i] = [int(x) for x in input().split()]
dp = []
for i in range (N):
    val = max (A[i], B[i], C[i])
    act = None
    if val == A[i] : act = 'A'
    elif val == B[i] : act = 'B'
    else : act = 'C'

