# https://atcoder.jp/contests/dp/tasks/dp_e
# not a basic knapsack
N, W = [int(X) for X in input().split()]
wt = [0 for i in range (N)]
val = [0 for i in range (N)]
for i in range (N):
	wt[i], val[i] = [int(X) for X in input().split()]

dp = [[1e9 for i in range (1000000)] for j in range (1000)]


