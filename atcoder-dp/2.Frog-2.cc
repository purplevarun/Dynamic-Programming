// https://atcoder.jp/contests/dp/tasks/dp_b
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
/*
	Generalization of the previous problem
	
	5 3
	10 30 40 50 20

*/
int recursion (int* A, int N, int K, int i = 0, unordered_map <int,int> dp = {}){
	if (i >= N-1){
		return 0;
	}
	if (dp.find(i)!=dp.end())
		return dp[i];
	int Min = 1e9;
	for (int steps=1;steps<=K;steps++){
		if (i+steps < N){
			Min = min (
				Min,
				abs (A[i+steps]-A[i]) + recursion(A,N,K,i+steps)
			);
		}
	}
	return dp[i] = Min;
}
int tabulation (int* A, int N, int K){
	return -1;
}
int32_t main () {
	int N, K; cin >> N >> K;
	int A[N];
	for (int i=0;i<N;i++)
		cin >> A[i];
	int ans = recursion (A,N,K);
	cout << ans << '\n';
}