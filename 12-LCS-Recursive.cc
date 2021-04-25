#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
int LCS (string X, string Y, int N, int M) {
    if (M == 0 || N == 0)
        return 0;
    if (X[M-1] == Y[N-1])
        return LCS(X,Y,N-1,M-1) + 1;
    
    return max(
        LCS(X,Y,M,N-1) ,
        LCS(X,Y,M-1,N)
    );
}
int32_t main () {
    string X = "ABCDGH";
    string Y = "AEDFHR";
    cout << LCS (X, Y, X.size(), Y.size()) << endl;
}
