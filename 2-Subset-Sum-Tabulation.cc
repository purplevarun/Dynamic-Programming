#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int dp[10007][10007];
bool canSum (int *A, int N, int Sum){
    // dp[N+1][Sum+1]
    // base cases
    // when sum is 0
    for (int i=0;i<N+1;i++){
        dp[i][0] = true;
    }
    // when array size is 0
    for (int j=0;j<Sum+1;j++){
        dp[0][j] = false;
    }
    
}
int32_t main () {
    int A[] = {7,14};
    int N = sizeof(A)/sizeof(A[0]);
    int Sum = 300;
    cout << canSum (A, N, Sum) << endl;
}