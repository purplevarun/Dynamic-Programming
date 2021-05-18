#include <iostream>
using namespace std;
#define int int64_t
int setBit (int N, int pos){
	int M = 1 << pos;
	return N | M;
}
int getBit (int N, int pos){
	int M = 1 << pos;
	if ((N & M) == 0)
		return 0;
	return 1;
}
int UnsetBit (int N, int pos){
	int M = 1 << pos;
	int mask = ~M;
	return N & mask;
}
int32_t main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	cout << UnsetBit (17,0) << '\n'; 
	// expected = 16
}