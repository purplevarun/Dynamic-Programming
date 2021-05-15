#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cmath>
//#include <cstring>
//#include <climits>
//#include <iomanip>
//#include <stack>
//#include <queue>
using namespace std;
#define int int64_t
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define null nullptr
#define endl '\n'

void onigiri () {
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
			else if (wt[i-1] <= j){
				dp[i][j] = min (
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
int32_t main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	//cin >> t;
	while (t --){
		onigiri ();
	}
}
