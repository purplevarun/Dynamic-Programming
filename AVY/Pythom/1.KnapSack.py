def KnapSack(N, W, wt, val):
	dp = [[None for i in range (W+1)] for j in range (N+1)]
	

if __name__ == '__main__':
	N = 3
	W = 50
	wt = [10,20,30]
	val = [60,100,120]

	Ans = KnapSack (N,W,wt,val)

	print (Ans) 	