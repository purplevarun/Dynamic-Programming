#include <iostream>
using namespace std;
int32_t main () {
	int N, W;
	cin >> N >> W;
	int wt[N], val[N];
	for (int i=0;i<N;i++){
		cin >> wt[i] >> val[i];
	}
	int dp[N+1][W+1];

	for (int i=0;i<N+1;i++){
		for (int j=0;j<W+1;j++){
			if (i == 0 || j == 0){
				dp[i][j] = 0;
			}	
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
