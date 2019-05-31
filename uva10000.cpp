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
bool vis[105];
vector<int>path[105];
int dis[105];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void dfs(int n,int sz)
{
	vis[n]=1;
	for (int i = 0; i < path[n].size(); ++i)
	{
		int s=path[n][i];
		if(!vis[s] || dis[s]<dis[n]+1)
		{
			vis[s]=1;
			dis[s]=dis[n]+1;
			dfs(s,dis[s]);
		}
	}
}

int main()
{
	int n;
	int ck=1;
	int flag=0;
	while(cin >> n && n)
	{
		// if(flag)
		// 	cout << endl;
		// flag=1;

		int x;
		cin >> x;
		int u,v;
		while(cin >> u >> v && u && v)
		{
			path[u].push_back(v);
		}
		dfs(x,0);
		dis[x]=0;
		int mx=0,ans,dur;
		for (int i = 1; i <= n; ++i)
		{
			//cout << dis[i] << endl;
			if(dis[i]>mx)
			{
				ans=i;
				dur=dis[i];
				mx=dur;
			}
		}
		memset(vis,0,sizeof(vis));
		memset(dis,0,sizeof(dis));
		cout << "Case " << ck++ << ": The longest path from " << x << " has length " << dur << ", finishing at " << ans  << "."<< endl;
		for (int i = 0; i < 105; ++i)
		{
			path[i].clear();
		}
		cout << endl;
	}
}