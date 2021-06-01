#include <iostream>
#include <cstring>
#define int long long
using namespace std;
bool ispalin (string s,int i,int j) {
	while (i <= j) {
		if (s[i++] != s[j--])
			return false;
	}
	return true;
}
#define MAX 1000 + 7
int dp[MAX][MAX];
int MCM (string s, int i, int j) {
	if (dp[i][j] != -1)
		return dp[i][j];
	// base cases
	if (i >= j) 
		return 0;
	if (ispalin (s,i,j))
		return 0;
	int Min = 1e9;
	for (int k=i;k<j;k++) {
		if (ispalin (s,i,k)) {
			int temp = 1 + MCM (s, k+1, j);
			Min = min (Min, temp);
		}	
	}
	return dp[i][j] = Min;
}
signed main () {
	ios_base::sync_with_stdio (0);cin.tie (0);
	memset (dp,-1,sizeof(dp));
	string s = "ababbbabbababa"; // answer = 3
	int i=0;
	int j=s.size()-1;
	cout << MCM(s,i,j) << '\n';
}