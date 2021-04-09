// https://practice.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1/
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
unordered_map <int,bool> dp;
bool canSum (int *A, int N, int Sum){
    if (dp.find(Sum)!=dp.end())
        return dp[Sum];
    if (Sum < 0)
        return dp[Sum] = false;
    if (Sum == 0)
        return dp[Sum] = true;
    for (int i=0;i<N;i++){
        if (canSum(A,N,Sum-A[i]))
            return dp[Sum] = true;
    }
    return dp[Sum] = false;
}
int32_t main () {
    int A[] = {7,14};
    int N = sizeof(A)/sizeof(A[0]);
    int Sum = 300;
    cout << canSum (A, N, Sum) << endl;
}