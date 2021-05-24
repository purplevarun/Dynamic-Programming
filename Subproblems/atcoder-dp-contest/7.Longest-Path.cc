// https://atcoder.jp/contests/dp/tasks/dp_g
#include <bits/stdc++.h>
#define int long long
using namespace std;
const int MAX = 1e5 + 7;
vector <int> Edges[MAX];
int Degree[MAX];
int dist[MAX];
bool visited[MAX];
void dfs (int a){
	visited [a] = true;
	for (int b:Edges[a]){
		dist[b] = max (dist[b], dist[a]+1);
		--Degree[b];
		if (Degree[b] ==0)
			dfs(b);
	}
}
signed main () {
	ios_base::sync_with_stdio(0);
	cin.tie(0);		
	int N, M; cin >> N >> M;
	while (M--) {
		int a, b; cin >> a >> b;
		Edges[a].push_back(b);
		++Degree[b];
	}
	for (int i=1;i<=N;i++) {
		if (!visited[i] && Degree[i]==0)
			dfs(i);
	}
	cout << *max_element (dist, dist + MAX) << "\n";
}
