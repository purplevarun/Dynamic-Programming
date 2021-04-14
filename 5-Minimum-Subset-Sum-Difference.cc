// https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1 
#include <bits/stdc++.h>
using namespace std;
vector<int> SubsetSum (int *A, int N, int Sum){
	bool dp[N+1][Sum+1];
	for (int i=0;i<N+1;i++){
		for (int j=0;j<Sum+1;j++){
			if (i == 0) // N = 0, Array cannot sum up to Sum
				dp[i][j] = false;
			if (j == 0) // Sum = 0, Array can sum upto Sum (using 0 elements)
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
/*
	Minimize sum(subset1) - sum(subset2)
	we know : sum(subset1) + sum(subset2) = sum(array)
	therefore, sum(S2) = sum(A) - sum(S1)
	therefore, minimize:
		= sum(S1) - (sum(A) - sum(S1))
		= sum(A) - 2sum(S1)
*/
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
	// int A[] = {5,6,6,5,7,4,7,6};
	// int N = 8;
	int A[] = {87,100,28,67,68,41,67,1};
	int N = 8;
	// cout << MinSubsetDiff (A,N) << endl;
	int diff = MinSubsetDiff(A,N);
	int sum = accumulate(A,A+N,0);
	cout << sum/2 + diff << ", " << sum - sum/2 - diff << endl;
}
