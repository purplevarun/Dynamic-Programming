def ways (coins,Sum):
    N = len (coins)
    dp = [[0 for i in range (Sum+1)] for j in range (N+1)]
    for i in range (N+1):
        for j in range (Sum+1):
            if i == 0: # array of coins is empty
                dp[i][j] = 0
            if j == 0: # need to create Sum = 0
                dp[i][j] = 1

    for i in range (1,N+1):
        for j in range (1,Sum+1):
            if coins [i-1] <= j:
                dp[i][j] = dp[i-1][j] + dp[i][j-coins[i-1]]
            else :
                dp[i][j] = dp[i-1][j]
    return dp[N][Sum]
# coins = [1,2,3]
# Sum = 5
coins = [2,5,3,6]
Sum = 10
print (ways(coins,Sum))