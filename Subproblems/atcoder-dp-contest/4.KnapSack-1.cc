// https://atcoder.jp/contests/dp/tasks/dp_d
// https://www.hackerrank.com/contests/srin-aadc03/challenges/classic-01-knapsack/problem
// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
// https://www.spoj.com/problems/LKS/
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int knapsack(int *wt, int *val, int N, int W){
	int dp[W+1];
	memset(dp,0LL,sizeof(dp));
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
	int N, W; 
	cin >> N >> W;
	// cin >> W >> N;
	int wt[N], val[N];
	for (int i=0;i<N;i++)
		cin >> wt[i] >> val[i];
		// cin >> val[i] >> wt[i];
	cout << knapsack(wt, val, N, W) << '\n';
	// expected answer = 90
}
