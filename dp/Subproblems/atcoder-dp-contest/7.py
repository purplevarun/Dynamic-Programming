import sys
sys.setrecursionlimit(10**6)
MAX = int (1e5 + 7)
edges = [[] for i in range (MAX)]
degree = [0 for i in range (MAX)]
dist = [0 for i in range (MAX)]
visited = [False for i in range (MAX)]

def dfs (a):
	visited [a] = True
	for b in edges[a]:
		dist[b] = max (dist[b], dist[a]+1)
		degree[b] -= 1
		if degree[b] == 0:
			dfs (b)

if __name__ == '__main__':
	n, m = [int (x) for x in input().split()]
	for _ in range (m):
		a, b = [int (x) for x in input().split()]
		edges[a].append(b)
		degree[b] += 1

	for i in range (1, n+1):
		if not visited[i] and degree[i]==0:
			dfs(i)

	print (max (dist))
