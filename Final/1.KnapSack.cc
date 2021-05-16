// https://atcoder.jp/contests/dp/tasks/dp_d
// https://www.hackerrank.com/contests/srin-aadc03/challenges/classic-01-knapsack/problem
// https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
#include <iostream>
using namespace std;
#define int int64_t
int knapsack(int *wt, int *val, int N, int W){
	int dp[N+1][W+1];
	for (int i=0;i<N+1;i++){
		for(int j=0;j<W+1;j++){
			if (i == 0 || j == 0)
				dp[i][j] = 0;
		}
	}
	for (int i=1;i<N+1;i++){
		for(int j=1;j<W+1;j++){
			if (wt[i-1] <= j){
				dp[i][j] = max (
					dp[i-1][j],
					val[i-1] + dp[i-1][j-wt[i-1]]
				);
			}
			else{
				dp[i][j] = dp[i-1][j];
			} 
		}
	}
	return dp[N][W];
}
signed main () {
	int N = 3, W = 8;
	int wt[] = {3,4,5};
	int val[] = {30,50,60};
	cout << knapsack(wt, val, N, W) << '\n';
	// expected answer = 90
}
