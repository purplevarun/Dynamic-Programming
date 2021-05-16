// https://practice.geeksforgeeks.org/problems/coin-change2448/1
#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
int count(int coins[], int N, int Sum) {
  int dp[N + 1][Sum + 1];
  for (int i = 0; i < N + 1; i++) {
    for (int j = 0; j < Sum + 1; j++) {
      if (i == 0) // N is 0
      {
        dp[i][j] = 0;
      }
      if (j == 0) {
        dp[i][j] = 1;
      }
    }
  }

  for (int i = 1; i < N + 1; i++) {
    for (int j = 1; j < Sum + 1; j++) {
      if (coins[i - 1] <= j) {
        dp[i][j] = dp[i - 1][j] + dp[i][j - coins[i - 1]];
      } else
        dp[i][j] = dp[i - 1][j];
    }
  }
  return dp[N][Sum];
}
int32_t main () {
    int coins[] = {1,2,3};
    int N = 3;
    int Sum = 4;
    cout << count (coins,N,Sum) << endl;
}
