/*
	FORMAT MCM :
	Input : String or Array

	---------------------------
		i         k           j
	
							func (i,j)
								/    \
							 /      \
					func(i,k)   func (k+1,j) 

	Base Condition :Smallest Valid Input
	Base 1 : if (i > j) return 0
	K -> i to j
	temp_ans = solve (i,k) + solve (k+1,j) 
*/
#include <iostream>
#define int long long
using namespace std;
signed main () {
	ios_base::sync_with_stdio (0);cin.tie (0);
	int N = 5;
	int A[N] = {40, 20, 30, 10, 30};	
}