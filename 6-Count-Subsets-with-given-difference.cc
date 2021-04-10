#include <bits/stdc++.h>
using namespace std;
#define vi vector <int>
#define int int64_t
/*
    S1 = subset 1
    S2 = subset 2
    A = array
    given :  1) sum(S1) - sum(S2) = D
    we know, 2) sum(S1) + sum(S2) = sum(A)
    therefore, 2sum(S1) = D + sum(A)
              = sum(S1) = (D + sum(A))/2
*/
int countSubsetsDifference (int *A, int N, int D){

}
int32_t main () {
    int A[] = {1,1,2,3};
    int N = 4;
    int D = 1;
    cout << countSubsetsDifference (A,N,D) << endl;
}