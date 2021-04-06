#include <bits/stdc++.h>
using namespace std;
int W,N;
unordered_map <string,int> dp;
int knap (int W,int *wt, int *val, int N){
    string key = to_string(W)+","+to_string(N);
    if (dp.find(key)!=dp.end()) return dp[key];
    if (W==0 || N == 0)
        return dp[key] = 0;
    if (wt[N-1] <= W){
        return dp[key] = max (
            val[N-1] + knap(W-wt[N-1],wt,val,N-1),
            knap(W,wt,val,N-1)
        );
    }
    else return dp[key] = knap(W,wt,val,N-1);
}
void solve () {
    cin >> W >> N;
    int wt[N],val[N];
    for (int i=0;i<N;i++)
        cin >> wt[i] >> val[i];
    cout << knap (W,wt,val,N) << endl;
}
int main() {
    int T; cin >> T;
    clock_t X = clock();
    while (T--) solve ();
    clock_t Y = clock();
    cout << fixed << setprecision(4) << 
    double(Y-X) / double (CLOCKS_PER_SEC) << endl;
    return 0;
}
