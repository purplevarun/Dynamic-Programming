#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
int countSubsets (int *A, int N, int Sum) {
    // create dp
    int dp[N+1][Sum+1];
    // fill baseCase
    for (int i=0;i<N+1;i++){
        for (int j=0;j<Sum+1;j++){
            if (i==0)
                dp[i][j] = 0;
            if (j==0)
                dp[i][j] = 1;
        }
    }
    dp[0][0] = 1;
    // fill dp
    for (int i=1;i<N+1;i++){
        for (int j=1;j<Sum+1;j++){
            if (A[i-1]<=j)
                dp[i][j] = dp[i-1][j] + dp[i-1][j-A[i-1]];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[N][Sum];
}
/*
    S1 = subset 1
    S2 = subset 2
    A = array
    given :  1) sum(S1) - sum(S2) = D
    we know, 2) sum(S1) + sum(S2) = sum(A)
    therefore, 2sum(S1) = D + sum(A)
              = sum(S1) = (D + sum(A)) / 2

    Also , sum(S2) = (sum(A) - D)/2
*/
int countSubsetsDifference (int *A, int N, int D){
    
}
int32_t main () {
    int A[] = {1,1,2,3};
    int N = 4;
    int D = 1;
    cout << countSubsetsDifference (A,N,D) << endl;
}