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

bool comp(pair<ll,ll> a, pair<ll,ll> b) {
	if(a.first != b.first) return a.first > b.first;
	return a.second > b.second;
}
int main()
{

	ll t;
	cin >> t;
	std::vector< pair<ll,ll> > vt;
	for (int i = 1; i <= t; ++i)
	{
		ll x,y,z;
		cin >> x >> y >> z;
		vt.push_back(make_pair(y + z, x));
	}
	sort(vt.begin(), vt.end(),comp);
	ll ans = 0, pre = 0;
	for(auto v : vt) {
		ans = max(ans, pre + v.first + v.second);
		pre += v.second;
	}
	cout << ans << endl;
	return 0;
}	