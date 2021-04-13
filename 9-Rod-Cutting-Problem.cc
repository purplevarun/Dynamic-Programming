// https://practice.geeksforgeeks.org/problems/rod-cutting0840/1
#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
int rodCut (int *Price, int N) {
    int W = N;
    int length[N];
    for (int i=0;i<N;i++) length[i] = i+1;
    int dp[N+1][W+1];
    for (int i=0;i<N+1;i++){
        for (int j=0;j<W+1;j++){
            if (i==0)
                dp[i][j] = 0;
            if (j==0)
                dp[i][j] = 0;
        }
    }
    for (int i=1;i<N+1;i++){
        for (int j=1;j<W+1;j++){
            if (length[i-1] <= j)
                dp[i][j] = max (
                    dp[i-1][j],
                    Price[i-1] + dp[i][j-length[i-1]]
                );
            else 
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[N][W];
}
int32_t main () {
    int Price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int N = 8;
    cout << rodCut (Price, N) << endl;
}