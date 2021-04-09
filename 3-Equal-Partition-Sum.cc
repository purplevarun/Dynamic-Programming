#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
bool EqualPartition (int *A, int N) {
    int sum = accumulate(A,A+N,0);
    if (sum%2!=0)
        return false;
    return subsetSum (A,N,sum);
}
int32_t main () {
    int A = {1,5,11,5};
    int N = 4;
    cout << EqualPartition(A,N) << endl;
}