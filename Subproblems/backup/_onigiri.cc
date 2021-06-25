// all this code and still a newbie
#include <bits/stdc++.h>
#define	int int64_t
#define vi vector<int>
#define vb vector<bool>
#define pb push_back
#define all(X) X.begin(), X.end()
#define endl "\n"
using namespace std;
template <typename A, typename B>ostream& operator<<(ostream& os, const pair<A, B> X){
	os << X.first << " , " << X.second << "";
	os << "\n";
	return os;
}
template <typename A, typename B> void dbg (unordered_map <A, B> X){
	cout << "{\n";
	for (auto i:X) cout << "    " << i.first << " : " << i.second << "\n";
	cout << "}\n";
}
template <typename A, typename B> void dbg (pair <A, B> X){
	cout << "[ ";
	cout << "" << X.first << " , " << X.second << "";
	cout << " ]\n";
}
template <typename A, typename B> void dbg (map <A, B> X){
	cout << "{\n";
	for (auto i:X) cout << "    " << i.first << " : " << i.second << "\n";
	cout << "}\n";
}
template <typename A, typename B> void dbg (map <A, B, greater<A>> X){
	cout << "{\n";
	for (auto i:X) cout << "    " << i.first << " : " << i.second << "\n";
	cout << "}\n";
}
template <typename T>void dbg(set<T> X){
	cout << "{ ";
	for (auto i:X) cout << i << " ";
	cout << "}\n";
}
template <typename T>void dbg(T A[], int N){
	cout << "[ ";
	for (int i=0;i<N;i++) 
		cout << A[i] << " ";
	cout << "]\n";
}
template <typename T>void dbg(vector<T> X){
	cout << "[ ";
	for (auto i:X) cout << i << " ";
	cout << "]\n";
}
template <typename T>void dbg(set<T, greater<T>> X){
	cout << "{ ";
	for (auto i:X) cout << i << " ";
	cout << "}\n";
}
vi seive (int N) {
	vb primes(N+1, true);
	primes[0]=primes[1]=false;
	for (int p=2;p*p<=N;++p){
		for (int i=p*p;i<=N;i+=p){
			primes[i] = false;
		}
	}
	vi Ans;
	for (int i=0;i<=N;++i) if (primes[i]) Ans.pb(i);
	return Ans;
}
bool isprime (int N){
	if (N < 2) return false;
	for (int i=2;i*i<=N;++i){
		if (N%i == 0)
			return false;
	}
	return true;
}
void kotatsu();
int32_t main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifdef varun_debug
		auto begin = std::chrono::high_resolution_clock::now();
	#endif
	int testcase = 5;
	//cin >> testcase;
	for (int tc=1;tc<=testcase;tc++){
		kotatsu();
	}
	#ifdef varun_debug
		auto end = std::chrono::high_resolution_clock::now();
		cerr << setprecision(4) << fixed;
		cerr << "Execution time: " << 
		std::chrono::duration_cast
		<std::chrono::duration<double>>
		(end - begin).count() << " seconds" << endl;
	#endif
}
// ---------------------------------------------------
void kotatsu() {
	cout << "hello world" << endl;
}
