#include<bits/stdc++.h>
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
//editorial
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
ll a[105];
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int p;
		//ll ans=1;
		cin >> p;
		for (int i = 0; i < p; ++i)
		{
			cin >> a[i];
			//ans *=x;
		}
		for (int i = 0;i<p; ++i)
		{
			for (int j = i+1; j < p; ++j)
			{
				ll x=__gcd(a[i],a[j]);
				if(x>1)
				{
					cout << x << endl;
					goto here;
				}
			}
		}
		
		for (int i = 0; i < p; ++i)
		{
			ll as=a[i];
			for (ll j = 1;j*j*j <= as; ++j)
			{
				if(j>1 && as%(j*j)==0)
				{
					cout << j << endl;
					goto here;
				}
				if(as%j==0)
				{
					ll xd=as/j;
					ll pq=(ll)sqrt(xd);
					if(pq>1 && pq*pq==xd)
					{
						cout << pq << endl;
						goto here;
					}
				}
			}
		}

		//assert(false);
		here: continue;
	}

}