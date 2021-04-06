#     Given : wt [], val [] and Max W
#     Output : Maximum val

#     Checking for DP:
#     1. It has a choice (either choose item or don't)
#     2. We need optimal solution

#     Therefore, it is DP.
 
#           APPROACH :

#     W = wt of Item, C = Max W

#             Item
#             /  \
#            /    \
#          W<=C   W>C
#          / \     |  
#         /   \    |
#        1     0   0 

#  Base Condition : Think of smallest valid input
dp = {}
def Knapsack (wt,val,N,W):
    key = str(N) + "," + str(W)
    if key in dp: return dp[key]
    if N == 0 or W == 0:
        return 0
    
    if wt[N-1] <= W:
        dp[key] =  max (
            val[N-1] + Knapsack(wt,val,N-1,W-wt[N-1]),
            Knapsack(wt,val,N-1,W)
        )
        return dp[key]
    else :
        dp[key] = Knapsack(wt,val,N-1,W)
        return dp[key]

wt = [10,20,30]
val = [60,100,120]
W = 50
N = 3
print (Knapsack(wt,val,N,W))
print (dp)