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

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
vector<ll>v[300005],xd;
void factorize(long long p) 
{ 
    //int count = 0; 
    ll dd=p;
  	ll ck=0;
    // count the number of times 2 divides  
    while (!(dd % 2)) { 
    	if(ck==0)
    		v[p].push_back(2);
        dd >>= 1;
        ck=1;
    }
    for (long long i = 3; i <= sqrt(dd); i += 2) { 
    		ck=0;
        while (dd % i == 0) { 
            if(ck==0)
            {
            	v[p].push_back(i);
            } 
            dd = dd / i; 
            ck=1;
        } 
    } 
    if (dd > 2) 
        v[p].push_back(dd);
} 
ll a[300005],b[300005],md[300005];
int main()
{
	ll n,m;
	cin >> n >> m;
	ll g=0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if(i!=0)
		g=__gcd(g,a[i]-a[i-1]);
	}
	//cout << g<< endl;
	ll khela=0,hbe;
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
		if(b[i]==1)
		{
			khela=1;
			hbe=i+1;
		}
	}
	ll moro=0,mal;
	for (int i = 0; i < m; ++i)
		{
			if(g%b[i]==0)
			{
				mal=i+1;
				moro=1;
				break;
			}
		}
	if(moro !=1)
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	cout << a[0] << " " << mal << endl; 




}