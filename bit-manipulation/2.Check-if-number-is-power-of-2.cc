#include <iostream>
using namespace std;
#define int int64_t
bool isPowerof2 (int N){
	if (N == 0)
		return false;
	return (N & (N-1)) == 0; // main logic
}
int32_t main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	// N & N-1 has the same bits as N 
	// except the rightmost set bit
	for (int i=0;i<1e4;i++)
		if (isPowerof2(i))
			cout << i << '\n';
}