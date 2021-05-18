// https://atcoder.jp/contests/dp/tasks/dp_h
// https://leetcode.com/problems/unique-paths-ii/
#include <iostream>
using namespace std;
#define int int64_t
int mod = 1e9 + 7;
char grid [1007][1007];
int paths (int N, int M){
	int dp[N+1][M+1];
	for (int i=0;i<N+1;i++){
		for (int j=0;j<M+1;j++){
			dp[i][j] = 0;
		}
	}
	dp[0][1] = 1;
	for (int i=1;i<N+1;i++){
		for (int j=1;j<M+1;j++){
			if (grid[i-1][j-1] == '.'){
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
				dp[i][j] = dp[i][j]%mod;
			}
		}
	}
	return dp[N][M];
}
int32_t main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int N, M;
	cin >> N >> M;
	for (int i=0;i<N;i++)
		for (int j=0;j<M;j++)
			cin >> grid [i][j];
	cout << paths (N, M) << '\n';
}