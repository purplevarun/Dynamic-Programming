#include <iostream>
using namespace std;
#define int long long int
int32_t main () {
	int N, W;
	cin >> N >> W;
	int wt[N], val[N];
	for (int i=0;i<N;i++){
		cin >> wt[i] >> val[i];
	}
	int sum = accumulate (val,val+N,0);
	int dp[N+1][sum+1];
	for (int i=0;i<N+1;i++) {
		for (int j=0;j<sum+1;j++){
			if (i==0 || j==0){
				dp[i][j] = 0;
			}
		}
	}

}
