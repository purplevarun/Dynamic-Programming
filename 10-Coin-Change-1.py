def ways (coins,Sum):
    N = len (coins)
    dp = [[0 for i in range (N+1)] for j in range (Sum+1)]
    
coins = [1,2,3]
Sum = 5
print (ways(coins,Sum))