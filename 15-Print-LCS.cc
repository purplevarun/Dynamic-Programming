// https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence/problem
#include <bits/stdc++.h>
using namespace std;
vector<int> printLCS (vector<int> A, vector<int> B){
    int N = A.size(), M = B.size();
    int dp[N+1][M+1];
    for (int i=0;i<N+1;i++){
        dp[i][0] = 0;
    }
    for (int j=0;j<M+1;j++){
        dp[0][j] = 0;
    }
    vector<int> answer;
    for (int i=1;i<N+1;i++){
        for (int j=1;j<M+1;j++){
            if (A[i-1]==B[j-1]){
                dp[i][j] = dp[i-1][j-1] + 1;
            }
            else {
                dp[i][j] = max (dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    int i = N, j = M;
    while (i>=0 && j>=0){
        if (A[i-1]==B[j-1])  {
            answer.push_back(A[i-1]);
            i--;
            j--;
        }
        else {
            if (dp[i][j-1]>dp[i-1][j])
              j--;
            else
              i--;  
        }
    }
    reverse (answer.begin(),answer.end());
    if (answer[0]==0)
        answer.erase(answer.begin());
    return answer;
}
int main () {
    vector <int> A = {1,2,3,4,1};
    vector <int> B = {3,4,1,2,1,3};
    vector <int> Result = printLCS (A,B);
    for (int i:Result){
        cout << i << " ";
    }
    cout << "\n";
}
