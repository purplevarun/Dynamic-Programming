#include <bits/stdc++.h>
#define int int64_t
using namespace std;
int lcs (string A, string B){
	int N = A.size(), M = B.size();
	int dp[N+1][M+1];
	for (int i=0;i<N+1;i++){
		for (int j=0;j<M+1;j++){
			if (i == 0 || j == 0){
				dp[i][j] = 0;
				continue;
			}
			if (A[i-1] == B[j-1]){
				dp[i][j] = dp[i-1][j-1] + 1;
			}
			else {
				dp[i][j] = max (
						dp[i-1][j],
						dp[i][j-1]
					);
			}
		}
	}
	return dp[N][M];
}
int lps (string S){
	string S1 = S;
	reverse(S.begin(), S.end());
	return lcs (S,S1);
}
int32_t main () {
	string S = "aebcbda";
	cout << S.size() - lps (S) << endl;
}