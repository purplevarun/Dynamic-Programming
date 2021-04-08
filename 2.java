import java.io.*;
import java.util.*;
class Main {
    public static void main (String[] args)throws Exception{
        int A[] = {7,14};
        int N = A.length;
        int Sum = 300;
        System.out.println(canSum(A,N,Sum));
    }
    static boolean canSum(int A[], int N, int Sum){
        int dp[][] = new int[N+1][Sum+1];
        
    }
}