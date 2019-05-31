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
bool visited[10001];
int dis[10005];
vector<int>path[10005];
int n;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int bfs(int p)
{
	queue<int>q;
	q.push(p);
	visited[p]=1;
	int u;
	while(!q.empty())
	{
		u=q.front();
		q.pop();
		for (int i = 0; i < path[u].size(); ++i)
		{
			int v=path[u][i];
			if(!visited[v])
			{
				visited[v]=1;
				q.push(v);
			}
		}
	}
	return u;
}
int ck=0;
void bfs1(int p)
{
	queue<int>q;
	q.push(p);
	for (int i = 0; i <= n; ++i)
	{
		dis[i]=0;
	}
	visited[p]=1;
	int u;
	while(!q.empty())
	{
		//ck++;
		u=q.front();
		q.pop();
		for (int i = 0; i < path[u].size(); ++i)
		{
			int v=path[u][i];
			if(!visited[v])
			{
				dis[v]=dis[u]+1;
				visited[v]=1;
				q.push(v);
			}
		}
	}
	for (int i = 1; i < n+1; ++i)
	{
		//cout << i << " " << dis[i] << " " << ck <<endl;
		ck=max(ck,dis[i]);
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n-1; ++i)
	{
		int u,v;
		cin >> u >> v;
		path[u].push_back(v);
		path[v].push_back(u);
	}
	memset(visited,0,sizeof(visited));
	int xd=bfs(1);
	memset(visited,0,sizeof(visited));
	bfs1(xd);
	cout << ck << endl;
}