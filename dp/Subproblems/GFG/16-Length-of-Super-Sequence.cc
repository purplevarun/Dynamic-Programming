#include <bits/stdc++.h>
using namespace std;
int LCS (string A, string B) {
    int N = A.size(),M = B.size(); 
    int dp [N+1][M+1];
    for (int i=0;i<N+1;i++)
        dp[i][0] = 0;
    for (int j=0;j<M+1;j++)
        dp[0][j] = 0;
    int Max = -1e9;
    for (int i=1;i<N+1;i++){
        for (int j=1;j<M+1;j++){
            if (A[i-1]==B[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else 
                dp[i][j] = max (dp[i-1][j],dp[i][j-1]);
            Max = max (Max, dp[i][j]);
        }
    }
    return Max;    
}   
int superSequence(string A, string B) {
    int N = A.size(),M = B.size(); 
    return N+M-LCS(A,B);
}
int main () {
    string A = "AGGTAB";
    string B = "GXTXAYB";
    cout << superSequence(A,B) << endl;    
}
