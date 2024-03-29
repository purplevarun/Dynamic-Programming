// https://leetcode.com/problems/longest-palindromic-subsequence/
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int LCS (string A, string B) {
    int N = A.size(), M = B.size();
    int dp[N+1][M+1];
    for (int i=0;i<N+1;i++){
        for (int j=0;j<M+1;j++){
            if (i==0 || j==0)
                dp[i][j] = 0;
        }
    }
    
    for (int i=1;i<N+1;i++){
        for (int j=1;j<M+1;j++){
            if (A[i-1] == B[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else 
                dp[i][j] = max (
                    dp[i-1][j],
                    dp[i][j-1]
                );
        }
    }
    return dp[N][M];
}
int LPS (string A) {
    string B = A;
    reverse (B.begin(),B.end());
    return LCS (A,B);
}
int32_t main (){
    string A = "bbbab";
    cout << LPS (A) << endl;
}