// https://atcoder.jp/contests/dp/tasks/dp_a
#include <bits/stdc++.h>
#define int int64_t
using namespace std;
/*
-> Greedy Method Fails
*/
// unordered_map <int,int> dp;
// int recur (int i, int* A, int N){
// 	if (i == N-1){
// 		return 0;
// 	}
// 	if (dp.find (i) != dp.end())
// 		return dp[i];
// 	int jump1 = abs (A[i] - A[i+1]) + recur (i+1,A,N);
// 	int jump2 = 1e9;
// 	if (i+2 < N)
// 		jump2 = abs (A[i] - A[i+2]) + recur (i+2,A,N);
// 	return dp[i] = min (jump1,jump2);
// }
int32_t main () {
	int N; cin >> N;
	int A[N];
	for (int i=0;i<N;i++) 
		cin >> A[i];
	// int ans = recur (0,A,N); // recursive method
	
	cout << ans << '\n';
}