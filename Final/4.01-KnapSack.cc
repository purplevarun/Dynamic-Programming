// https://atcoder.jp/contests/dp/tasks/dp_d
// https://www.hackerrank.com/contests/srin-aadc03/challenges/classic-01-knapsack/problem
// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
// https://www.spoj.com/problems/LKS/
#include <iostream>
#include <algorithm>
using namespace std;
// #define int int64_t
int knapsack(int *wt, int *val, int N, int W){
	int dp[W+1];
	for (int i=0;i<W+1;i++) 
		dp[i] = 0;
	for (int i=0;i<N;i++){
		for (int j=W-wt[i];j>=0;j--){
			dp[j+wt[i]] = max (
				dp[j+wt[i]],
				dp[j] + val[i]
			);
		}
	}
	return *max_element(dp,dp+W+1);
}
signed main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int N = 3, W = 8;
	int wt[] = {3,4,5};
	int val[] = {30,50,60};
	cout << knapsack(wt, val, N, W) << '\n';
	// expected answer = 90
}
