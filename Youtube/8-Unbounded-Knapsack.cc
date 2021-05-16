#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
int unboundedKnapSack(int W, int wt[], int val[], int N){
    int dp[N+1][W+1];
    for (int i=0;i<N+1;i++){
        for (int j=0;j<W+1;j++){
            if (i==0){
                dp[i][j] = 0;
            }
            if (j==0){
                dp[i][j] = 0;
            }
        }
    }
    for (int i=1;i<N+1;i++){
        for (int j=1;j<W+1;j++){
            if (wt[i-1]<=j){
                dp[i][j] = max ( 
                    dp[i-1][j],
                    val[i-1] + dp[i][j-wt[i-1]]
                );
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[N][W];
}
int32_t main () {
    int W = 100;
    int wt[] = {1,50};
    int val[] = {1,30};
    int N = 2;
    cout << unboundedKnapSack(W, wt, val, N) << endl;
}