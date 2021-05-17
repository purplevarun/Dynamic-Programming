#include <iostream>
using namespace std;
#define int int64_t
signed main () {
	int N; cin >> N;
	int dp[N][3];
	int A, B, C;
	cin >> A >> B >> C;
	dp[0][0] = A;
	dp[0][1] = B;
	dp[0][2] = C;
	for (int i=1;i<N;i++){
		cin >> A >> B >> C;
		dp[i][0] = A + max (dp[i-1][1], dp[i-1][2]);
		dp[i][1] = B + max (dp[i-1][0], dp[i-1][2]);
		dp[i][2] = C + max (dp[i-1][0], dp[i-1][1]);
	}
	cout << max(
		max (
			dp[N-1][0],
			dp[N-1][1]
		),

			dp[N-1][2]

	) << '\n';
}