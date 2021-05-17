#include <iostream>
using namespace std;
#define int int64_t
signed main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);cout.tie(nullptr);
	
	int N, K;
	scanf ("%lld %lld",&N,&K);
	int count = 0;
	int X;
	for (int i=0;i<N;i++){
		scanf("%lld",&X);
		if (X%K==0)
			count++;
	}
	cout << count << '\n';
}