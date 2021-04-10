// https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1 
#include <bits/stdc++.h>
using namespace std;
vector<int> SubsetSum (int *A, int N, int Sum){
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
	vector<int> ans;
	for (int i=0;i<=Sum/2;i++){
		if (dp[N][i]==true)
			ans.push_back(i);
	}
	return ans;
}
int MinSubsetDiff (int *A, int N){
	int Sum = accumulate(A,A+N,0);
	vector <int> idx = SubsetSum(A,N,Sum);
	int Min = 1e9;
	for (int i=0;i<idx.size();i++){
		Min = min (Min,Sum-2*idx[i]);
	}
	return Min;
}
int main () {
	int A[] = {5,6,6,5,7,4,7,6};
	int N = 8;
	cout << MinSubsetDiff (A,N) << endl;
}
