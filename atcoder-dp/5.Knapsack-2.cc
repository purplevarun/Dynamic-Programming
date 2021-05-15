#include <iostream>
using namespace std;
#define int long long int
int32_t main () {
	int N, W;
	cin >> N >> W;
	int wt[N], val[N];
	for (int i=0;i<N;i++){
		cin >> wt[i] >> val[i];
	}
	int dp[100+7][1000+7];

	for (int i=0;i<100+7;i++){
		for (int j=0;j<1000+7;j++){
			dp[i][j] = 0;
		}
	}
	for (int i=1;i<N+1;i++){
		for (int j=1;j<W+1;j++){
			if (wt[i-1] <= j){
				dp[i][j] = max (
					dp[i-1][j],
					dp[i-1][j-wt[i-1]] + val[i-1]
				);
			}
			else {
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	cout << dp[N][W] << endl;
}
