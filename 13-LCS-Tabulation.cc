#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
int LCS (string X, string Y, int N, int M) {
    int dp[N+1][M+1];
    // base case
    for (int i=0;i<N+1;i++){
        for (int j=0;j<Sum+1;j++){
            // base case
            if (i==0 || j==0)
                dp[i][j] = 0;
        }
    }
    for (int i=1;i<N+1;i++){
        for (int j=1;j<Sum+1;j++){
            
        }
    }
}
int32_t main () {
    string X = "ABCDGH";
    string Y = "AEDFHR";
    cout << LCS (X, Y, X.size(), Y.size()) << endl;
}