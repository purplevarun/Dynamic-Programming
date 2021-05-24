#include <bits/stdc++.h>
using namespace std;
#define int 	  int64_t
#define all(X)    X.begin(), X.end()
#define vi        vector<int>
#define vb 		  vector<bool>
#define vs        vector<string>
#define pb 		  push_back
#define mp        make_pair
#define ld        long double
vector<bool> primeseive (int n) {
	vector<bool> prime (n+1,true);
	prime[0] = prime [1] = false;
	for (int p=2;p*p<=n;p++){
		if (prime[p] == true){
			for (int i=p*p;i<=n;i+=p){
				prime[i] = false;
			}
		}
	}
	return prime;
}
int fceil (int x, int y){
	if (x%y == 0)
		return x/y;
	return x/y + 1;
}
template <typename T>
void dbg (vector<T> A, int N){
	for (int i=0;i<N-1;i++)
		cout << A[i] << ", ";
	cout << A[N-1] << '\n';
}
template <typename T, typename R>
void dbg (unordered_map <T,R> mp){
	cout << "{" << '\n';
	for (auto i:mp){
		cout << "    ";
		cout << i.first << " : " << i.second << '\n';
	}
	cout << "}" << '\n';
}
template <typename T, typename R>
void dbg (map <T,R> mp){
	cout << "{" << '\n';
	for (auto i:mp){
		cout << "    ";
		cout << i.first << " : " << i.second << '\n';
	}
	cout << "}" << '\n';
}
template <typename T>
void dbg (T A[], int N){
	for (int i=0;i<N-1;i++)
		cout << A[i] << ", ";
	cout << A[N-1] << '\n';
}
// -------------------------------------------------------
// Some super cool stuff above, but don't touch it - VK
// -------------------------------------------------------
void solve () {
	int N; cin >> N;
	int A[N];
	for (int i=0;i<N;i++)
		cin >> A[i];
	int dp[N];
	dp[0] = 0;
	for (int i=1;i<N;i++){
		if (i>=2){
			dp[i] = min (
				dp[i-1] + abs (A[i] - A[i-1]),
				dp[i-2] + abs (A[i] - A[i-2])
			);
		}
		else {
			dp[i] = dp[i-1] + abs (A[i] - A[i-1]);
		}
	}			
	cout << dp[N-1] << '\n';
}	
signed main () {
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	// cin >> t;
	while (t--)
		solve ();
}