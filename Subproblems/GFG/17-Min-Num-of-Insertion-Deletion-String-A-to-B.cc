// https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1
#include <iostream>
using namespace std;
int LCS (string A, string B){
	int N = A.size(), M = B.size();
	int dp[N+1][M+1];
	for (int i=0;i<N+1;i++){
		for (int j=0;j<M+1;j++){
			if (i==0 || j==0)
				dp[i][j] = 0;
		}
	}

	for (int i=1;i<N+1;i++){
		for (int j=1;j<M+1;j++){
			if (A[i-1] == B[j-1])
				dp[i][j] = dp[i-1][j-1] + 1;
			else 
				dp[i][j] = max (
					dp[i-1][j], dp[i][j-1]
				);
		}
	}	
	return dp[N][M];
}
int count (string A, string B) {
	return A.size() + B.size() - 2*LCS(A,B);
}
int main () {
    string A = "heap";
    string B = "pea";
    cout << count (A,B) << endl;
}
