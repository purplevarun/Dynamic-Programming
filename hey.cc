#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int W,N;
// unordered_map <string,int> dp;
int knap (int W,int *wt, int *val, int N){
    int dp[N+1][W+1];
    // base cases
    for (int i=0;i<N+1;i++){
        dp[i][0] = 0;
    }
    for (int j=0;j<W+1;j++){
        dp[0][j] = 0;
    }
    for (int i=1;i<N+1;i++){
        for (int j=1;j<W+1;j++){
            if (wt[i-1]<=j){
                dp[i][j] = max (
                    val[i-1] + dp[i-1][j-wt[i-1]],
                    dp[i-1][j]
                );
            } 
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[N][W];
}
void solve () {
    cin >> W >> N;
    int wt[N],val[N];
    for (int i=0;i<N;i++)
        cin >> wt[i] >> val[i];
    cout << knap (W,wt,val,N) << endl;
}
int32_t main() {
    int T; cin >> T;
    while (T--) solve ();
    return 0;
}