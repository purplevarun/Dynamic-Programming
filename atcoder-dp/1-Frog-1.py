# https://atcoder.jp/contests/dp/tasks/dp_a
'''
Minimum cost before frog reaches end of array 
-> Frog can jump from i to i+1 
-> Frog can jump from i to i+2
'''
N = int(input())
A = [int(X) for X in input().split()]

dp = [1e9 for i in range (N)]
dp[0] = 0
dp[1] = abs (A[1] - A[0])

for i in range (2,N):
	dp[i] = min (
		dp[i-1] + abs (A[i] - A[i-1]),
		dp[i-2] + abs (A[i] - A[i-2])
	)

print (dp[-1])