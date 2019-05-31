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

using namespace std;
int mx=100000001;
bool isprime[100000001];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void sieve()
{
    isprime[0]=isprime[1]=true;
    for (int i = 4; i < mx ; i +=2)
    {
        isprime[i]=true;
    }
    for (int i = 3; i < sqrt(mx); i +=2)
    {
        for (int j = i*i; j < mx; j +=i)
        {
            isprime[j]=true;
        }
    }

}
int main()
{
    sieve();
    int x;
    while(cin >> x)
    {
        if(x%2==1)
        {
            if(isprime[x-2]==0 && x-2>0)
            {
                cout << x << " is the sum of 2 and " << x-2 << "." << endl; 
            }
            else
                cout << x <<" is not the sum of two primes!" << endl;
        }
        else
        {
            int ck=0;
            int flag=0;
            for(int i=x/2;i<x;i++)
            {
                if(isprime[x/2-ck]==0 && isprime[i]==0 && x/2-ck != i)
                {
                    cout << x << " is the sum of "<< x/2-ck << " and " << i << "." << endl;
                    flag=1;
                    break;
                }
                ck++;
            }
            if(!flag)
                 cout << x <<" is not the sum of two primes!" << endl;

        }

    }

}

