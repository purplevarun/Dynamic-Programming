N = int (input())
dp = [[None for i range (3)] for j in range (N)]
for i in range (N):
    A, B, C = [int (X) for X in input().split()]
    # base case 
    if i == 0:
        dp[i][0] = A
        dp[i][1] = B
        dp[i][2] = C
        continue

    dp[i][0] = A + max (dp[i-1][1], dp[i-1][2]) 
    dp[i][1] = B + max (dp[i-1][0], dp[i-1][2]) 
    dp[i][2] = C + max (dp[i-1][0], dp[i-1][1])

