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

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int a[200005],b[200005],s[200005];
int main()
{
	int n;
	cin >> n;
	map<int,int>mp;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	//vector<pair<int,int>>v;
	int mx=0;
	// for (auto i :mp)
	// {
	// 	mx=max(mx,i.second);
	// }
	//cout << mx << endl;
	//sort(v.rbegin(),v.rend());
	int x;
	cin >> x;
	int ck=1,ans=1;
	vector<int>v;
	cin >> b[0];
	mx=mp[b[0]];
	v.push_back(0);
	// mx=0;
	for (int i = 1; i < x; ++i)
	{
		cin >> b[i];
		if(mp[b[i]]==mx)
		{
			ck++;
			ans=i+1;
			v.push_back(i);
		}
		else if(mp[b[i]]>mx)
		{
			ck=1;
			mx=mp[b[i]];
			v.clear();
			v.push_back(i);
			ans=i+1;
		}
	}
	//cout << ck << endl;
	for (int i = 0; i < x; ++i)
	{
		cin >> s[i];
	}
	//cout << ck << endl;
	if(ck==1)
	{
		cout << ans << endl; 
	}
	else if(ck==0)
	{
		for (int i = 0; i < x; ++i)
		{
			if(mp[s[i]]==mx)
			{
				ans=i+1;
			}
		}
		cout << ans << endl;
	}
	else
	{
		int bala=mp[s[v[0]]];
		ans=v[0]+1; 
		for (int i = 1; i < v.size(); ++i)
		{
			if(mp[s[v[i]]]>bala)
			{
				ans=v[i]+1;
				bala=mp[s[v[i]]];

			}
		}
		cout << ans << endl;
	}

}