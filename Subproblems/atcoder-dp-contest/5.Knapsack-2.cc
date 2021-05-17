// https://atcoder.jp/contests/dp/tasks/dp_e
#include <iostream>
#include <numeric>
using namespace std;
#define int int64_t
// W = 1e9
int Knapsack2(int *wt, int *val, int N, int W){
	int V = 0LL;
	for (int i=0;i<N;i++)
		V += val[i];
	int dp[N+1][V+1];
	for (int i=0;i<N+1;i++){
		for (int j=0;j<V+1;j++){
			dp[i][j] = 1e9;
		}
	}
	dp[0][0] = 0;
	dp[0][val[0]] = wt[0];
	for (int i=1;i<N+1;i++){
		dp[i][0] = 0;
		for (int j=1;j<V+1;j++){
			dp[i][j] = dp[i-1][j];
			if (val[i] <= j){
				dp[i][j] = min (
					dp[i][j],
					wt[i] + dp[i-1][j-val[i]]
				);
			}
			
		}
	}
	int ans = 0;
	for (int i=V;i>=0;--i){
		if (dp[N-1][i]<=W){
			ans = i;
			break;
		}
	}
	return ans;
}
signed main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	int N, W; cin >> N >> W;
	int wt[N], val[N];
	for (int i=0;i<N;i++){
		cin >> wt[i] >> val[i];
	}
	cout << Knapsack2(wt, val, N, W) << '\n';
}