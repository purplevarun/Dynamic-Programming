N = int (input())
A = [int(X) for X in input().split()]

dp = [1e9 for i in range(N)]
dp[0] = 0

for i in range (1,N):
    if i == 1:
        dp[i] = abs (A[1] - A[0])
    else :
        dp[i] = min (
            dp[i-1] + abs (A[i]-A[i-1]),
            dp[i-2] + abs (A[i]-A[i-2])
        )
print (dp[-1])
