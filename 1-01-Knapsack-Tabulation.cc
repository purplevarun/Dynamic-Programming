#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int KnapSack (int W, int *wt, int *val, int N){
    int dp[W+1][N+1];
    // base cases
    for (int i=0;i<W+1;i++){
        dp[i][0] = 0;
    }
    for (int j=0;j<N+1;j++){
        dp[0][i] = 0;
    }
    for (int i=1;i<W+1;i++){
        for (int j=1;j<N+1;j++){
            
        }
    }
}
int32_t main () {
    int W = 50;
    int wt[] = {10,20,30};
    int val[] = {60,100,120};
    int N = 3;
    cout << KnapSack(W,wt,val,N) << endl;
}