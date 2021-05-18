// https://leetcode.com/problems/unique-paths/
// https://practice.geeksforgeeks.org/problems/count-all-possible-paths-from-top-left-to-bottom-right3011/1
#include <iostream>
using namespace std;
#define int int64_t
#define MOD 1000000007
int paths (int N, int M){
	int dp[N][M];
	for(int i=0;i<N;i++){
		for (int j=0;j<M;j++){
			if (i==0 || j==0)
				dp[i][j] = 1;
		}
	}
	for(int i=1;i<N;i++){
		for (int j=1;j<M;j++){
			dp[i][j] = dp[i-1][j] + dp[i][j-1];
			dp[i][j] = dp[i][j]%MOD;
		}
	}
	return dp[N-1][M-1];
}
int32_t main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M;
	cin >> N >> M;
	cout << paths (N, M) << '\n';
}