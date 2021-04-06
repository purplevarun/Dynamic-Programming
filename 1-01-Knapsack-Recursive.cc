/*
Given : wt [], val [] and Max W
Output : Maximum val

Checking for DP:
1. It has a choice (either choose item or don't)
2. We need optimal solution

Therefore, it is DP.
 
    APPROACH :

    W = wt of Item, C = Max W

            Item
            /  \
           /    \
         W<=C   W>C
         / \     |  
        /   \    |
       1     0   0 

Base Condition : Think of smallest valid input */

