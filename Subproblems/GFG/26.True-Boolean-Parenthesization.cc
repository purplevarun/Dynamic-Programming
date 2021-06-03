#include <iostream>
#include <cstring>
#define int long long
using namespace std;
int dp[207][207][2];
int MCM (string s, int i, int j, bool istrue) {
	if (dp[i][j][istrue] != -1)
		return dp[i][j][istrue];
	if (i > j)
		return dp[i][j][istrue] = 0;
	if (i == j){
		int ans;
		if (istrue)
			ans = s[i] == 'T';
		else 
			ans = s[i] == 'F';
		return dp[i][j][istrue] = ans;
	}
	int count = 0;
	int lt, rt, lf, rf;
	for (int k=i+1;k<j;k+=2) {
		// first check if dp has it or not
		lt = dp[i][k-1][1]==-1?MCM(s,i,k-1,1):dp[i][k-1][1];
		lf = dp[i][k-1][0]==-1?MCM(s,i,k-1,0):dp[i][k-1][0];
		rt = dp[k+1][j][1]==-1?MCM(s,k+1,j,1):dp[k+1][j][1];
		rf = dp[k+1][j][0]==-1?MCM(s,k+1,j,0):dp[k+1][j][0];
		switch (s[k]){
			case '&' :
				if (istrue){
					count += lt*rt;
				}
				else {
					count += lf*rf + lf*rt + lt*rf;
				}
				break;
			case '|':
				if (istrue){
					count += lt*rt + lt*rf + lf*rt;
				}
				else {
					count += lf*rf;
				}
				break;
			case '^':
				if (istrue){
					count += lt*rf + lf*rt;
				}
				else {
					count += lt*rt + lf*rf;
				}
				break;
		}
	}
	return dp[i][j][istrue] = count%1003;
}
signed main () {
	ios_base::sync_with_stdio (0);cin.tie (0);
	memset (dp, -1, sizeof(dp));
	int n = 7;
	string s = "T|T&F^T"; // answer = 4
	int i = 0;
	int j = n-1;
	cout << MCM (s, i, j, true) << '\n';
}