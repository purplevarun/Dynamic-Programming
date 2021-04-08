#include <bits/stdc++.h>
using namespace std;
#define int int64_t

bool canSum (int *A, int N, int Sum){
    bool dp[N+1][Sum+1];
    // base cases
    // when sum is 0
    for (int i=0;i<N+1;i++){
        dp[i][0] = true;
    }
    // when array size is 0
    for (int j=0;j<Sum+1;j++){
        dp[0][j] = false;
    }
    dp[0][0] = true;
    for (int i=1;i<N+1;i++){
        for (int j=1;j<Sum+1;j++){
            if (A[i-1]<=j){
                dp[i][j] = dp[i-1][j-A[i-1]] || dp[i-1][j];
            }
            else 
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[N][Sum];
}
int32_t main () {
    int A[] = {7,14};
    int N = sizeof(A)/sizeof(A[0]);
    int Sum = 147;
    cout << canSum (A, N, Sum) << endl;
}