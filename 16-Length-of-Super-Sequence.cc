#include <bits/stdc++.h>
using namespace std;
int LCS (string A, string B) {
    int N = A.size(),M = B.size(); 
    int dp [N+1][M+1]={{0}};
    int Max = -1e9;
    for (int i=1;i<N+1;i++){
        for (int j=1;j<M+1;j++){
            
        }
    }
    return 0;    
}   
int superSequence(string A, string B) {
    int N = A.size(),M = B.size(); 
    return 100;
}
int main () {
    string A = "AGGTAB";
    string B = "GXTXAYB";
    cout << superSequence(A,B) << endl;    
}
