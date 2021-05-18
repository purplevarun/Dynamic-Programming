#include <iostream>
using namespace std;
#define int int64_t
int countSetBits (int N){
	int count = 0;
	while (N > 0){
		N = N & (N-1);
		count++;
	}
	return count;
}
int32_t main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cout << countSetBits(19) << '\n';
}