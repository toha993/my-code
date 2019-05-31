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
#define inf 1000000000
using namespace std;
vector<int>path[10005],cost[10005];
int dis[10002], vis[10002], Timer = 0;
int n;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void bfs(int x)
{
	priority_queue<pair<int,int>>q;
	q.push(make_pair(0,x));
	for (int i = 1; i <= n; ++i)
	{
		dis[i]=inf;
	}
	dis[x]=0;
	while(!q.empty())
	{
		int u=q.top().second;
		int ds=q.top().first* -1;
		q.pop();
		if(vis[u] < Timer) {		
		for (int i = 0; i < path[u].size(); ++i)
		{
			int v=path[u][i];
			if(dis[v]>ds+cost[u][i])
			{
				dis[v]=dis[u]+cost[u][i];
				q.push(make_pair(dis[v] *-1,v));
			}
		}
		}
		vis[u] = Timer;

	}

}
map<string,int>mp;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--)
	{
		//int n;
		cin >> n;
		for (int i = 1; i <= n; ++i)
		{
			string s;
			cin >> s;
			int p;
			cin >>p;
			mp[s]=i;
			for (int j = 0; j < p; ++j)
			{
				int xd,xc;
				cin >>xd >> xc;
				path[i].push_back(xd);
				cost[i].push_back(xc);
			}
		}
		int q;
		cin >> q;
		while(q--)
		{
			++Timer;
			string x,x1;
			cin >> x >> x1;
			//cout << mp[x] << endl;
			bfs(mp[x]);
			cout << dis[mp[x1]] << endl;
		}
		mp.clear();
		for (int i = 1; i <= n; ++i)
		{
			path[i].clear();
			cost[i].clear();
		}

	}
}