#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a,long long b)
{
  if(a<b)
    swap(a,b);
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}
int  a[100005],b[100005];
int main() {
  int t,q;
  cin >> t >> q;
  b[0]=0;
  for (int i = 1; i <= t; ++i)
  {
    cin >> a[i];
    b[i]=gcd(b[i-1],a[i]);
   // cout << b[i] << endl;
  }
  for (int i = 0; i * i < g ; ++i)
  {
    if(g%i==0)
      
  }
  
  cout << q << endl; 

}