// https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1
#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
int countSubsets (int *A, int N, int Sum ){
    int dp [N+1][Sum+1];
    // base case / Initialization
    for (int i=0;i<N+1;i++){
        for (int j=0;j<Sum+1;j++){
            if (j==0)
                dp[i][j]=1;
            if (i==0)
                dp[i][j]=0;
        }
    }
    dp[0][0] = 1;
    // table 
    for (int i=1;i<N+1;i++){
        for (int j=1;j<Sum+1;j++){
            int include = dp[i-1][j-dp[i-1]];
            int exclude = dp[i-1][j];
            
        }
    }
}
int32_t main () {
    int A[] = {2,3,5,6,8,10};
    int N = 6;
    int Sum = 10;
    cout << countSubsets(A,N,Sum) << endl;
}