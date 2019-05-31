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

int v[100005];
map<ll,int>mp;
int main()
{
	int n;
	cin >>n;
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
	}
	long long ans=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 32; ++j)
		{

			ans +=mp[(1<<j)-v[i]];
		}
		mp[v[i]]++;
		//cout << ase[v[i]] << endl;
	}
	cout << ans << endl;
}