#include <bits/stdc++.h>
using namespace std;
#define int int64_t
int LCS (string A, string B) {
    
}
int LPS (string A) {
    string B = A;
    reverse (B.begin(),B.end());
    return LCS (A,B);
}
int32_t main (){
    string A = "bbbab";
    cout << LPS (A) << endl;
}