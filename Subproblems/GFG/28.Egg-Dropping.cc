/* https://practice.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1 */
#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int dp[207][207];
int eggDrop (int e, int f) {
	if (dp[e][f]!=-1)
		return dp[e][f];
	if (f == 0 || f == 1 || e == 1)
		return dp[e][f] = f;

	int Min = 1e9;
	
	for (int k=1;k<=f;++k){ // looping over each floor
		int eggBreaks = eggDrop(e-1, k-1);
		int eggDoesNotBreak = eggDrop(e, f-k);
		int temp = 1 + max (eggBreaks, eggDoesNotBreak);
		Min = min (Min, temp);
	}
	return dp[e][f] = Min;
}
int32_t main () {
	memset (dp, -1, sizeof(dp));
	int e = 2, f = 10;
	cout << eggDrop (e, f) << '\n';
}
