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
#define f first
#define sc second
#define ll long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	int n,m;
	cin >> n >> m;
	map<int,int>mp;
	long long a[100005],b[100005];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	vector<pair<ll,ll>>v;
	int ck=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			v.push_back({a[i]*b[j],a[i]});

		}
	}
	sort(v.begin(),v.end());
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	cout << v[i].f << "  " << v[i].sc << endl;
	// }
	if(mp[v[v.size()-1].sc]>1)
		{
			cout << v[v.size()-1].f << endl;
			return 0;
		}
	for (int i = v.size()-1; i >= 0; --i)
	{
		if(v[i].sc != v[v.size()-1].sc)
		{
			cout << v[i].f << endl;
			return 0;
		}
	}

}