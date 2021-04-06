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
int knapsack (int Weight[], int Value[], int N, int Capacity){
    if (N == 0 || Capacity == 0)
        return 0;
    
    int choice1 = Value[N-1] + knapsack (Weight,Value,N-1,Capacity-Weight[N-1]);
    int choice2 = knapsack(Weight,Value,N-1,Capacity);

    if (Weight[N-1] <= Capacity)
        return max (choice1, choice2);
    else
        return choice2;
}
int32_t main () {
    int N = 3;
    int Value[] = {60,100,120};
    int Weight[] = {10,20,30};
    int Capacity = 50;
    cout << knapsack (Weight,Value,N,Capacity) << endl;
}