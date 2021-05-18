#include <iostream>
#include <vector>
using namespace std;
#define int int64_t
vector<string> subsets (string s, int n){
	vector<string> subsets;
	for (int i=0;i<(1<<n);i++){
		string temp = "";
		for (int j=0;j<n;j++){
			if (i & (1<<j)){
				// checking if the bit is 1
				temp += s[j];
			}
		}
		subsets.push_back(temp);
	}
	return subsets;
}
int32_t main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string s = "ABC";
	vector<string> ans = subsets(s,s.length());
	for (auto i:ans)
		cout << i << '\n';
}