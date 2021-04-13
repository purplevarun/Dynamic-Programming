// https://practice.geeksforgeeks.org/problems/rod-cutting0840/1
#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
int rodCut (int *Price, int N) {
    int W = N;
    int length[N];
    for (int i=0;i<N;i++) length[i] = i+1;
    
}
int32_t main () {
    int Price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int N = 8;
    cout << rodCut (Price, N) << endl;
}