#include <bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main () {
	int N, W;
	cin >> N >> W;
	int wt[N], val[N];
	for (int i=0;i<N;i++){
		cin >> wt[i] >> val[i];
	}
	int sum = accumulate (val,val+N,0);
	int dp[N+1][sum+1];
	for (int i=0;i<N+1;i++) {
		for (int j=0;j<sum+1;j++){
			dp[i][j] = 1e9;
		}
	}
	dp[0][0] = 0;
	for (int i=1;i<N+1;i++) {
		for (int j=sum; j>=val[i]; --j){
			dp[i][j] = min (
				dp[i-1][j],
				wt[i-1] + dp[i-1][j-val[i-1]]
			);		
			cout << dp[i][j] << ' ';
		}
		cout << endl;
	}
}
