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
#include <bits/stdc++.h>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


long long a[200005];
int main()
{
	long long p,q,h;
	cin >> h >> q;
	for (int i = 1; i <= q; ++i)
	{
		/* code */
		cin >> a[i];
		a[i] +=a[i-1];
	}
	if(a[q]>=0)
	{
		for (int i = 1; i <= q; ++i)
		{
			/* code */
			if(h+a[i]==0)
			{
				cout << i << endl;
				return 0;
			}
		}
		cout<<-1<<endl;
		return 0;
	}
	long long mi=1000000000000000010;
	for (int i = 1; i <= q; ++i)
	{
		long long k=max((long long)ceil((a[i]*1.0+h*1.0)/(-a[q]*1.0)),0LL);
		if(k>=0)
		{
			// cout << k << endl;
			mi=min(mi,k*q+i);
		}
	}
	if(mi==1000000000000000010)
		cout << -1 << endl;
	else
		cout << mi << endl;
}