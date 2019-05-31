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
#define fr first
#define sc second
using namespace std;
//editorial
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int a[200005],b[200005],c[200005],d[200005];
void solve(pair<int,int>&p)
{
	int d=__gcd(abs(p.fr),abs(p.sc));
	if(p.fr<0)
		{
			p.fr *=-1;
			p.sc *=-1;
		}
	else if(p.fr==0 && p.sc <0)
	{
		p.sc *=-1;
	}
	p.fr /=d;
	p.sc /=d;


}
map<pair<int,int>,int>m;
int main()
{
	int n;
	cin >> n;
	int ck=0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if(a[i]==0)
			ck++;
	}
	int cn=0;
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
		if(b[i]==0)
			cn++;
	}
	if(ck==n && cn==0)
	{
		cout << 0 << endl;
		return 0;
	}
	int x=0,mx=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			if(b[i]==0)
				x++;
		}
		else
		{
			pair<int,int>p=make_pair(-b[i],a[i]);
			solve(p);
			m[p]++;
			mx=max(mx,m[p]);
		}
	}
	cout << mx+x << endl;
}