#include <iostream>
using namespace std;
#define int long long int
int32_t main () {
	int N, W;
	cin >> N >> W;
	int wt[N], val[N];
	int V = 0;
	for (int i=0;i<N;i++){
		cin >> wt[i] >> val[i];
		V += val[i];
	}
	int dp[N+1][V+1];
	for (int i=0;i<N+1;++i){
		for (int j=0;j<V+1;++j){
			dp[i][j] = 1e9;
		}
	}

	dp[0][0] = 0;
	dp[0][val[0]] = wt[0];
	
	for (int i=1;i<N+1;i++) {
		dp[i][0] = 0;
		for (int j=1;j<V+1;j++){
			
			dp[i][j] = dp[i-1][j];

			if (val[i] <= j)
				dp[i][j] = min (
					dp[i][j],
					wt[i] + dp[i-1][j-val[i]]
				);
			//cout << dp[i][j] << ' ';
		}
		//cout << endl;
	}
	int answer;
	for (int v = V; v>=0; v--){
		if (dp[N-1][v] <= W){
			answer = v;
			break;
		}
	}
	cout << answer << endl;
}
