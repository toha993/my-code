#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>
#define ll long long
using namespace std;
int main()
{
    ll n;
    while(cin >> n && n)
    {
        if(n%2==0)
        {
            ll ck=0;
            while(n%2==0)
            {
                n /=2;
                ck++;
            }
            cout << 2 << "^" << ck <<" ";
        }
        for(int i=3;i<=sqrt(n) && n!=1;i++)
        {
            if(n%i==0)
            {
                 ll ck=0;
             while(n%i==0)
               {
                    n /=i;
                    ck++;
               }
             if(n!=1)
              cout << i << "^" << ck <<" ";
            else
              cout << i << "^" << ck <<endl;
            }
        }
        if(n!=1)
            cout << n << "^" << 1 <<endl;
    }
}
