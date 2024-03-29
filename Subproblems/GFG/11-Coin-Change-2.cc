#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
int minCoins(int *Coins, int N, int Sum){
    int dp[N+1][Sum+1];
    // initialization
    for (int i=0;i<N+1;i++){
        for (int j=0;j<Sum+1;j++){
            if (i==0) // there are no coins
                dp[i][j] = 1e9; // hence it will take infinite coins
            if (j==0) // reqd sum is 0
                dp[i][j] = 0; // 0 coins reqd to get 0
        }
    }    
    dp[0][0] = 1e9;
        
    for (int i=1;i<N+1;i++){
        for (int j=1;j<Sum+1;j++){
            if (Coins[i-1] <= j){
                dp[i][j] = min (
                    1 + dp[i][j-Coins[i-1]],
                    dp[i-1][j]
                );
            }
            else 
                dp[i][j] = dp[i-1][j];
        }
    }
    if (dp[N][Sum] == 1e9)
        return -1;
    return dp[N][Sum];
}
int32_t main () {  
    int coins[] = {25,10,5};
    int N = 3;
    int Sum = 30;
    cout << minCoins(coins,N,Sum) << endl;
}