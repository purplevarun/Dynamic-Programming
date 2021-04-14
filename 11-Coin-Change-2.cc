#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
int minCoins(int *Coins, int N, int Sum){
    int dp[N+1][Sum+1];
    for (int i=0;i<N+1;i++){
        for (int j=0;j<Sum+1;j++){
            if (i==0) // there are no coins
                dp[i][j] = 1e9; // hence it will take infinite coins
            if (j==0) // reqd sum is 0
                dp[i][j] = 0; // 0 coins reqd to get 0
            if (i==1){
                if (j%Coins[i-1]==0)
                    dp[i][j] = j/Coins[i-1];
                else
                    dp[i][j] = 1e9;
            }
        }
    }    
    
}
int32_t main () {  
    int coins[] = {1,2,3};
    int N = 3;
    int Sum = 5;
    cout << minCoins(coins[],N,Sum) << endl;
}