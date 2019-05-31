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
map<pair<int,int>,bool>mp;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
bool dfs(ll a,ll b)
{
	if(a==0 || b==0)
	{
		 mp[make_pair(a,b)]=0;
		 mp[make_pair(b,a)]=0;
		return 0;
	}
	if(b%a==0)
	{
		 mp[make_pair(a,b)]=1;
		//mp[{b,a}]=1;
		return 1;
	}
	//ll k=a/b;
	bool flag=0;
	flag = flag | (dfs(b%a,a)^1);
	if(b/a>1)
	{
		ll x=b%a,y=a;
		a=x,b=y;
		if(a==0 || b==0)
		{
			 mp[make_pair(a,b)]=0;
			 mp[make_pair(b,a)]=0;
		}
		if(b%a==0)
		{
			 mp[make_pair(a,b)]=1;
			//mp[{b,a}]=1;
			flag= flag | 1;
		}

	flag=flag | (dfs(b%a,a)^1);
	}
	return mp[make_pair(a,b)] =flag;

}
int main()
{
	int t;
	ll p,q;
		while(cin >> p >> q)
		{
		if(q<p)
			swap(p,q);
		if(dfs(p,q))
			cout << "win" << endl;
		else
			cout << "lose" << endl;
	}
}