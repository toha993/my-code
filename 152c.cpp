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
#define endl "\n"
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int mod=1000000007;
int main()
{
	int n,m;
	long long ans=1;
	cin >> n >> m;
	string s[105];
	for (int i = 0; i < n; ++i)
	{
		cin >> s[i];
	}
	set<char>st[105];
	vector<int>vec;
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			st[i].insert(s[j][i]);
		}
		vec.push_back(st[i].size());
	}
	/*for (int i = 0; i < vec.size(); ++i)
	{
		cout << vec[i] << endl;
	}*/
	for (int i = 0; i < vec.size(); ++i)
	{
		ans = ((ans%mod)*(vec[i]%mod))%mod;
	}
	cout << ans << endl;
}