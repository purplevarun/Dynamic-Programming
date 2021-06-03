#include <iostream>
#include <cstring>
#define int long long
using namespace std;
int dp[207][207][2];
int MCM (string s, int i, int j, bool istrue) {
	if (dp[i][j][istrue] != -1)
		return dp[i][j][istrue];
	if (i > j)
		return false;
	if (i == j){
		if (istrue)
			return s[i] == 'T';
		else 
			return s[i] == 'F';
	}
	int count = 0;
	for (int k=i+1;k<j;k+=2) {
		int left_true = MCM (s,i,k-1,true);
		int left_false = MCM (s,i,k-1,false);
		int right_true = MCM (s,k+1,j,true);
		int right_false = MCM (s,k+1,j,false);
		if (s[k] == '&'){
			if (istrue)
				count += left_true*right_true;
			else 
				count += left_false*right_true+
						 left_true*right_false+
						 left_false*right_false;
		}
		else if (s[k] == '|') {
			if (istrue)
				count += left_true*right_false + 
						 left_true*right_true +
						 left_false*right_true;
			else 
				count += left_false*right_false;
		}
		else if (s[k] == '^') {
			if (istrue)
				count += left_true*right_false+
						 left_false*right_true;
			else 
				count += left_true*right_true+
						 left_false*right_false;
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