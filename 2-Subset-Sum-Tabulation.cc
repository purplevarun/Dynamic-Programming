#include <bits/stdc++.h>
using namespace std;
#define int int64_t
bool dp[10000007];
bool canSum (int *A, int N, int Sum){
    dp[0] = true;
    for (int i=1;i<N+1;i++){
        if (Sum-A[i]<0)
            dp[i] = false;
        dp[i] = dp[Sum-A[i]];
    }
    return dp[N];
}
int32_t main () {
    int A[] = {7,14};
    int N = sizeof(A)/sizeof(A[0]);
    int Sum = 300;
    cout << canSum (A, N, Sum) << endl;
}