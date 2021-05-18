#include <iostream>
using namespace std;
#define int int64_t
int32_t main () {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int arr[] = {2,4,6,3,4,6,2};
	int n = 7;
	int xorsum = 0;
	for (int i=0;i<n;i++)
		xorsum = xorsum ^ arr[i];
	cout << xorsum << '\n';	
}