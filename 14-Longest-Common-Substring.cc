#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
int lCs (string X, string Y, int N, int M) {
    int Max = 0;
    int dp [N+1][M+1];
    // initialization
    for (int i=0;i<N+1;i++){
        for (int j=0;j<M+1;j++){
            if (i==0 || j==0)
                dp[i][j] = 0;
        }
    }
    for (int i=1;i<N+1;i++){
        for (int j=1;j<M+1;j++){
            if (X[i-1] == Y[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
                Max = max (Max,dp[i][j]);
            }
            else 
                dp[i][j] = 0;
        }
    }
    return Max;
}
int32_t main () {
    //string X = "ABCDGH";
    //string Y = "AECDGHR";
    //cout << lCs(X,Y,X.length(),Y.length()) << endl;
    cout << "hello world" << endl;
}
