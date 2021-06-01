/*
	FORMAT MCM :
	Input : String or Array

	---------------------------
		i         k           j
	
							func (i,j)
								/    \
							 /      \
					func(i,k)   func (k+1,j) 

	Base Condition :Smallest Valid Input
	Base 1 : if (i > j) return 0
	K -> i to j
	temp_ans = solve (i,k) + solve (k+1,j) 
*/
#include <iostream>
#include <cstring>
#define int long long
using namespace std;
int dp[1007][1007];
int MCM (int *A, int i, int j) {
	if (dp[i][j]!=-1)
		return dp[i][j];
	if (i >= j)
		return 0;
	int Min = 1e9;
	for (int k = i;k < j;++ k){
		int temp_ans = (A[i-1] * A[k] * A[j]) + MCM (A, i, k) + MCM (A, k+1, j);
		Min = min (Min, temp_ans);
	}
	return dp[i][j] = Min;
}
signed main () {
	ios_base::sync_with_stdio (0);cin.tie (0);
	memset (dp, -1, sizeof (dp));
	// TC 1 - 26000
	int N = 5;
	int A[N] = {40, 20, 30, 10, 30};
	// TC 2 - 4500
	// int N = 4;
	// int A[N] = {10, 30, 5, 60};
	int i = 1, j = N-1;
	cout << MCM (A, i, j) << '\n';
}