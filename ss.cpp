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
vector<ll>v;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int dfs(ll n)
{
	if(n==0) return 1;
	if(dfs(n-1))
	{
		if(v[n]>1)
			return 1;
		return 0;
	}
	return 1;
}

int main()
{
	ll p,q;
		cin >> p >> q;
		if(q>p)
			swap(p,q);
		while(q!=0)
		{
			ll ans=p%q;
			v.push_back(p/q);
			p=q;
			q=ans;
		}
		reverse(v.begin(),v.end());
		if(dfs(v.size()-1)) cout << "Ari" << endl;
		else cout << "Rich" << endl;
}