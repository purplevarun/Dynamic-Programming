#include <iostream>
using namespace std;
#define int int64_t
int frog2 (int *A, int N, int K) {	
	int dp[N];
	for (int i=0;i<N;i++){
		dp[i] = 1e9;
	}
	dp[0] = 0;
	for (int i=1;i<N;i++){
		int j = i - 1;
		int steps = K;
		while (j >=0 && steps > 0){
			dp[i] = min (
				dp[i],
				dp[j] + abs (A[i]-A[j])
			);
			j--;
			steps--;
		}
	}
	return dp[N-1];
}
signed main () {
	int N, K; cin >> N >> K;
	int A[N];
	for (int i=0;i<N;i++){
		cin >> A[i];
	}
	cout << frog2 (A, N, K) << '\n';
}