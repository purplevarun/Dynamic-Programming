// https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1 
#include <bits/stdc++.h>
using namespace std;
vector<bool> SubsetSum (int *A, int N, int Sum){
	bool dp[N+1][Sum+1];
	for (int i=0;i<N+1;i++){
		for (int j=0;j<Sum+1;j++){
			if (i == 0)
				dp[i][j] = false;
			if (j == 0)
				dp[i][j] = true;
		}
	}	
	dp[0][0] = true;
	for (int i=1;i<N+1;i++) {
		for (int j=1;j<Sum+1;j++){
			if (A[i-1]<=j)
				dp[i][j] = dp[i-1][j] || dp[i-1][j-A[i-1]];
			else	
				dp[i][j] = dp[i-1][j];
		}
	}
	vector<bool> ans;
	for (int i=0;i<(Sum+1)/2;i++){
		ans.push_back(dp[N][i]);
	}
	return ans;
}
int MinSubsetDiff (int *A, int N){
	int Sum = accumulate(A,A+N,0);
	vector <bool> ans = SubsetSum(A,N,Sum);
	vector<int> idx;
	for (int i=0;i<ans.size();i++) 
		if (ans[i]) idx.push_back(i);
	
	return 1;
}
int main () {
	int A[] = {1,2,7};
	int N = 3;
	cout << MinSubsetDiff (A,N) << endl;
}
