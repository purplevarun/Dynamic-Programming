// https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence/problem
#include <bits/stdc++.h>
using namespace std;
vector<int> printLCS (vector<int> A, vector<int> B){
    int N = A.size(), M = B.size();
     
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
