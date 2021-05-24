#include <iostream>
using namespace std;
#define int int64_t

int lcs (string a, string b){
    int n = a.size(), m = b.size();
    int dp[n+1][m+1];
    for (int i=0;i<n+1;i++){
        for (int j=0;j<m+1;j++){
            dp[i][j] = 0;
        }
    }
    for (int i=1;i<n+1;i++){
        for (int j=1;j<m+1;j++){
            if (a[i-1]==b[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else 
                dp[i][j] = max (dp[i][j-1], dp[i-1][j]);
        }
    }
    return dp[n][m];
}
int lps (string s){
    string s1 = s;
    reverse (s1.begin(),s1.end());
    return lcs (s,s1);
}

signed main () {
    string s = "abcd";
    cout << s.length() - lps (s) << '\n';    
}