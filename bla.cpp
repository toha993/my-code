#include <bits/stdc++.h> 
using namespace std; 
  
// Function to return the nth Fibonacci number 
int fib(int n) 
{ 
    double phi = (1 + sqrt(5)) / 2; 
    return round(pow(phi, n) / sqrt(5)); 
} 
  
// Function to return the required sum 
long long calculateSum(int l, int r) 
{ 
  
    // Using our deduced result 
    long long sum = fib(r + 2) - fib(l + 1); 
    return sum; 
} 
  
// Driver code 
int main() 
{ 
    int l = 100000, r =200000000; 
    cout << calculateSum(l, r); 
  
    return 0; 
} 