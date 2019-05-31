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
ll point[200005];
priority_queue<ll>pq;
int main()
{
	int n,mx;
	cin >> n >> mx;
	for (int i = 0; i < n; ++i)
	{
		cin >> point[i];
	}
	string s;
	cin >> s;
	s +='.';
	char c='.';
	int i,k,t,xd=0;
	vector<ll>v;
	ll ans=0;
	for ( i = 0;i<=n;i++)
	{
		if(s[i]!=c)
		{
			k=0;
			c=s[i];
			while(!pq.empty())
			{
				if(k < mx)
				{
					k++;
					ans +=pq.top();
				}
				pq.pop();
			}
			//pq.push(point[i]);
		}
		pq.push(point[i]);
	}
	cout << ans << endl;


}		