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
vector<int>path[50005],cost[50005];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int dis[200005];
int p,q,r,s;
int inf=1e9+7;
void dijkstra(int xd)
{
	for (int i = 0; i <=p ; ++i)
	{
		dis[i]=inf;
	}
	priority_queue<pair<int,int>>q;
	dis[xd]=0;
	q.push({xd,0});
	int cnt[200005]={0};
	int cycle=false;
	while(!q.empty() && !cycle)
	{
		int a=q.top().first;
		int ucost=q.top().second;
		q.pop();
		for (int i = 0; i < path[a].size(); ++i)
		{
			int b=path[a][i];
			int vcost=cost[a][i];
			if(dis[b]>ucost+vcost)
			{
				dis[b]=ucost+vcost;
				q.push({b,dis[b]});
				cnt[b]++;
			}
			if(cnt[b]>=p)
				cycle=true;
		}
	}

}


int main()
{
	int n;
	cin >>n;
	int ck=1;
	while(n--)
	{
		cin >> p >> q >> r >> s;
		cout  << "Case #" << ck++ <<": ";
		while(q--)
		{
			int u,v,w;
			cin >> u >> v >> w;
			path[u].push_back(v);
			path[v].push_back(u);
			cost[u].push_back(w);
			cost[v].push_back(w);
		}
		dijkstra(r);
		if(dis[s]==inf)
		{
			cout << "unreachable" << endl;
		}
		else
			cout << dis[s] << endl;
		for (int i = 0; i <= p; ++i)
		{
			path[i].clear(),cost[i].clear();
		}

	}
}