#include <stdio.h> 
#include <bits/stdc++.h>
using namespace std;
  
void multiply(int F[2][2], int M[2][2]); 
  
void power(int F[2][2], int n); 
  
/* function that returns nth Fibonacci number */
int fib(int n) 
{ 
  int F[2][2] = {{10,1},{1,9}}; 
  if (n == 0) 
    return F[1][1]; 
  power(F, n-1); 
  return F[0][0]; 
} 
  
/* Optimized version of power() in method 4 */
void power(int F[2][2], int n) 
{ 
  if( n == 0 || n == 1) 
      return; 
  int M[2][2] = {{1,1},{1,0}}; 
  
  power(F, n/2); 
  multiply(F, F);
  
  if (n%2 != 0) 
     multiply(F, M); 
} 
  
void multiply(int F[2][2], int M[2][2]) 
{ 
  int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0]; 
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1]; 
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0]; 
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1]; 
  
  F[0][0] = x; 
  F[0][1] = y; 
  F[1][0] = z; 
  F[1][1] = w; 
} 
void f2(int ara[2][2]) {
ara[1][1] = 4;
} 
void f1() {
int ara[2][2] = {{1,2},{2,3}};
f2(ara);
cout << ara[1][1] << endl;
} 
/* Driver program to test above function */
int main() 
{ 
  int n = 7; 
  //printf("%d", fib(7)); 
  getchar(); 
  f1();
  return 0; 
} 