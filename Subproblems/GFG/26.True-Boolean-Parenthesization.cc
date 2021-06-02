#include <iostream>
#define int long long
using namespace std;
int MCM (string s, int i, int j) {
	for (int k=i;k<j;k+=2) {

	}
}
signed main () {
	ios_base::sync_with_stdio (0);cin.tie (0);
	int n = 7;
	string s = "T|T&F^T"; // answer = 4
	int i = 0;
	int j = n-1;
	cout << MCM (s, i, j) << '\n';
}