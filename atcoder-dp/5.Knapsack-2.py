# https://atcoder.jp/contests/dp/tasks/dp_e
# not a basic knapsack
N, W = [int(X) for X in input().split()]
wt = [0 for i in range (N)]
val = [0 for i in range (N)]
for i in range (N):
	wt[i], val[i] = [int(X) for X in input().split()]

M = max (val) + 7

dp = [[None for i in range (M+1)] for j in range (N+1)]