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
#define pb push_back
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
vector<pair<double,pair<int,int>>>v;
map<double,int>mp;
void xd(int n)
{
	for (int i = 1; i<=n; i++)
	{
		for (int j = 1; j<=i; ++j)
		{
			if(__gcd(j,i)==1)
			{
				v.pb({(double)j/i,{j,i}});
			}
		}
	}
	sort(v.begin(),v.end());
}
int  main()
{
	int n,m;
	//cin >>n;
	while(cin  >> n >> m)
	{
		xd(n);
		cout << v[m-1].sc.f << "/" << v[m-1].sc.sc << endl;
		// for (int i = 0; i < v.size(); ++i)
		// {
		// 	cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second  << endl;
		// }
		//cin >> n;
		// if(last >n)
		v.clear();
		
	}

}