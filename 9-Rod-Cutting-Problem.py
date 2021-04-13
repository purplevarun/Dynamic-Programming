# https://practice.geeksforgeeks.org/problems/rod-cutting0840/1
def rodCutting (price, N):
    length = [i+1 for i in range (N)]
    W = N
    dp = [[0 for i in range (N+1)] for j in range (W+1)]
    for i in range (1,N+1):
        for j in range (1,W+1):
            if length[i-1]<=j:
                dp[i][j] = max (
                    dp[i-1][j],
                    price[i-1] + dp[i][j-length[i-1]]
                    )
            else :
                dp[i][j] = dp[i-1][j]
    return dp[N][W]

N = 8
price = [1, 5, 8, 9, 10, 17, 17, 20] # answer = 22
#price = [3,5,8,9,10,17,17,20] # answer = 24
print (rodCutting(price,N))
