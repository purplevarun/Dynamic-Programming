// https://atcoder.jp/contests/dp/tasks/dp_i
#include <iostream>
#include <iomanip>
#define int long long 
using namespace std;
double dp[3000][3000]; // index, heads
double p[3000];
void onigiri() {
	int n; cin >> n;
	for (int i=0;i<n;i++) 
		cin >> p[i];
	dp[0][0] = 1 - p[0]; // 0 heads
	dp[0][1] = p[0]; // 1 head
	for (int i=1;i<n;i++) {
		for (int j=0;j<3000;j++) {
			// if tails
			dp[i][j] += (1-p[i]) * dp[i-1][j];
			// if heads
			if (j>0)
				dp[i][j] += p[i] * dp[i-1][j-1];
		}
	}
	double ans = 0;
	cout << fixed << setprecision(9);
	for (int i=n/2+1;i<3000;++i)
		ans += dp[n-1][i];
	cout << ans << "\n";
}
signed main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while (t--){
		onigiri();
	}
}