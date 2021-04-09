#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
bool subsetSum (int *A, int N, int Sum){
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
    // if sum is 0 and array size is 0
    dp[0][0] = true;
    // recursive conditions
    for (int i=1;i<N+1;i++){
        for (int j=1;j<Sum+1;j++){
            if (A[i-1]<=j){
		            // selecting OR not selecting
                dp[i][j] = dp[i-1][j-A[i-1]] || dp[i-1][j];
            }
            else 
		            // not selecting
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[N][Sum];
}
bool EqualPartition (int *A, int N) {
    int sum = accumulate(A,A+N,0);
    if (sum%2!=0)
        return false;
    return subsetSum (A,N,sum/2);
}
int32_t main () {
    int A[] = {1,5,11,5};
    int N = 4;
    cout << EqualPartition(A,N) << endl;
}