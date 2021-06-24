#include <bits/stdc++.h>
#define int long long
using namespace std;
unordered_map <string, int> dp;
bool isScramble (string A, string B){
	string key = A + ", " + B;
	if (dp.find(key)!=dp.end())
		return dp[key];
	if (A == B)
		return dp[key] = true;
	if (A.length() != B.length())
		return dp[key] = false;
	if (A.length() <= 1)
		return dp[key] = false;
	int N = A.length();
	for (int i=1;i<N;++i){
		bool cond1 = isScramble(A.substr(0,i), B.substr(N-i,i))&&
					 isScramble(A.substr(i,N-i), B.substr(0,N-i));
		bool cond2 = isScramble(A.substr(0,i), B.substr(0,i))&&
					 isScramble(A.substr(i,N-i), B.substr(i,N-i));
		if (cond1 || cond2)
			return dp[key] = true;
	}
	return dp[key] = false;
}
signed main () {
	ios_base::sync_with_stdio (0);cin.tie (0);
	string a = "great";
	string b = "eatgr";
	cout << isScramble(a, b) << endl;
}
