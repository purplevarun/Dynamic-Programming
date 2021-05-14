// https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
/*
	Minimum cost required to reach end of array using 1 or 2 jumps

	Concept : Linear DP
*/
int solve (int *A, int N){
	int dp[N];
	dp[0] = 0;
	dp[1] = abs (A[0] - A[1]);
	for (int i=2;i<N;i++){
		dp[i] = min (
			dp[i-1] + abs (A[i]-A[i-1]),
			dp[i-2] + abs (A[i]-A[i-2])
		);
	}
	return dp[N-1];
}
int32_t main () {
	int N; cin >> N;
	int A[N];
	for (int i=0;i<N;i++) 
		cin >> A[i];
	int ans = solve (A,N); // tabulation method
	cout << ans << '\n';
}