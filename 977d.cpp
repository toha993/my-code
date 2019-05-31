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
//tahseen
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
ll a[105];
map<long long,int>mp;
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	vector<long long>vt;
	for (int i = 0; i < t; ++i)
	{
		ll x=a[i];
		vt.push_back(x);
		for (int i = 0; i <t ; ++i)
		{
			if(x%3==0 && mp[x/3])
			{
				x /=3;
				vt.push_back(x);
			}
			else if(mp[x*2])
			{
				x *=2;
				vt.push_back(x);
			}
			else
				break;
		}
		if(vt.size()==t)
			break;
		vt.clear();
	}
	for (int i = 0; i < vt.size(); ++i)
	{
		cout << vt[i] << " ";
	}
	cout << endl;

}