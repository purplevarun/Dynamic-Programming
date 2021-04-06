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

def Knapsack (wt,val,N,W):
    if N == 0 or W == 0:
        return 0
    
    if wt[N-1] <= W:
        return max (
            val[N-1] + Knapsack(wt,val,N-1,W-wt[N-1]),
            Knapsack(wt,val,N-1,W)
        )
    else :
        return Knapsack(wt,val,N-1,W)

wt = [10,20,30]
val = [60,100,120]
W = 50
N = 3
print (Knapsack(wt,val,N,W))