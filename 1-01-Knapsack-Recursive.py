#     Given : Weight [], Value [] and Max Capacity
#     Output : Maximum Value

#     Checking for DP:
#     1. It has a choice (either choose item or don't)
#     2. We need optimal solution

#     Therefore, it is DP.
 
#           APPROACH :

#     W = Weight of Item, C = Max Capacity

#             Item
#             /  \
#            /    \
#          W<=C   W>C
#          / \     |  
#         /   \    |
#        1     0   0 

#  Base Condition : Think of smallest valid input
def Knapsack (Weight:list,Value:list,N:int,Capacity:int) -> int :
    if N == 0 or Capacity == 0:
        return 0
    
    Element = Value[N-1]
    choice1 = Element + Knapsack(Weight,Value,N-1,Capacity)
    choice2 = Knapsack(Weight,Value,N-1,Capacity-Element)

    if 