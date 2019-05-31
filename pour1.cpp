#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c;
    if (a < b)
      swap(a, b);
    d = gcd(a, b);
    if (c <= a && c % d == 0)
     {
      int x=a,y=b;
      a=0,b=0;
      int count=0;
      while(a != c && b != c)
            {
            if(a == 0)
            {
              a = x;
            }
            else if(b == y)
            {
            b = 0;
            }
            else //transfer from a to b
            {
              b = b+a;
              a = 0;
              if(b > y)
                {
                  a = b-y;
                  b = y;
                }
            }
                count ++;
            }
             a=0,b=0;
            int ck=0;
          while(a != c && b != c)
            {
            if(b == 0)
            {
              b = y;
            }
            else if(a == x)
            {
              a = 0;
            }
            else //transfer from a to b
            {
              a = a+b;
              b = 0;
            if(a > x)
              {
             
              b = a-x;
              a = x;

              }
            }
            ck ++;

            //cout<<a<<" "<<b<<endl;///steps

            }
          cout << min(ck,count) << endl;

     }
     // cout << min(a/d,b/d)  << endl;
    else
      cout << -1 << endl;
  }
}