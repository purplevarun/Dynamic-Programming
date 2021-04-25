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
			
		}
	}	
}
int count (string A, string B) {
	return 100;
}
int main () {
    string A = "heap";
    string B = "pea";
    cout << count (A,B) << endl;
}
