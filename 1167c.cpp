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
int par[500005],cnt[500005]={0};
//idea
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void pre(int n)
{
	for(int i=1;i<=n;i++)
	{
		par[i]=i;
		cnt[i]=1;
	}
}
int find(int n)
{
	if(par[n]==n)return n;
	par[n]=find(par[n]);
	return par[n];
}
void unin(int x,int y)
{
	int xx=find(x);
	int yy=find(y);
	if(xx != yy)
	{
		par[xx]=yy;
		cnt[yy] +=cnt[xx];
	}
}
//int a[500005];
int main()
{
	int n,m;
	cin >> n >> m;
	pre(n);
	for (int i = 0; i < m; ++i)
	{
		int p;
		cin >> p;
		if(p==0)
			continue;
		int xp;
		cin >> xp;
		for (int i = 1; i < p; ++i)
		{
			int as;
			cin >> as;
			unin(xp,as);
		}
		
	}
	for (int i = 1; i <= n; ++i)
		{
			int lm=find(i);
			if(i !=n)
			{
				cout << cnt[lm] << " ";
			}
			else 
				{
					cout << cnt[lm] << endl;
				}
		}
}