#include <iostream>
#include <algorithm>
using namespace std;
#define int int64_t
#define pb push_back
#define all(x) x.begin(), x.end()
string LCS (string A, string B){
	int N = A.length(), M = B.length();
	int dp[N+1][M+1];
	for (int i=0;i<N+1;i++){
		dp[i][0] = 0;
	}
	for (int i=0;i<M+1;i++){
		dp[0][i] = 0;
	}
	for (int i=1;i<N+1;i++){
		for (int j=1;j<M+1;j++){
			if (A[i-1]==B[j-1])
				dp[i][j] = dp[i-1][j-1] + 1;
			else 
				dp[i][j] = max (dp[i-1][j], dp[i][j-1]);
		}
	}
	// cout << dp[N][M] << '\n';
	string lcs = "";
	int i = N, j = M;
	while (i > 0 && j > 0){
		if (A[i-1]==B[j-1]){
			lcs.pb(A[i-1]);
			i--; j--;
		}
		else if (dp[i][j-1] > dp[i-1][j]){
			j--;
		}
		else {
			i--;
		}
	}
	reverse (all(lcs));
	return lcs;
}
signed main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);

	string A, B;
	cin >> A >> B;

	cout << LCS (A, B) << '\n';
}