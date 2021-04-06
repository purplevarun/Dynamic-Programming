#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define vi vector <int>
/* 
    Given : Weight [], Value [] and Max Capacity
    Output : Maximum Value

    Checking for DP:
    1. It has a choice (either choose item or don't)
    2. We need optimal solution

    Therefore, it is DP.
 
          APPROACH :

    W = Weight of Item, C = Max Capacity

            Item
            /  \
           /    \
         W<=C   W>C
         / \     |  
        /   \    |
       1     0   0 

 Base Condition : Think of smallest valid input
*/
int knapsack (int Weights[], int Values[], int N, int Capacity){
    
}
int32_t main () {

}