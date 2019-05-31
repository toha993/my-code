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
vector<int>path[100005];
bool visited[100005];
int dis[100005];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void bfs(int n)
{
	queue<int>q;
	q.push(n);
	dis[n]=1;
	visited[n]=1;
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		for (int i = 0; i < path[u].size(); ++i)
		{
			int v=path[u][i];
			if(!visited[v])
			{
				visited[v]=1;
				dis[v]=dis[u]+1;
				q.push(v);
			}
		}
	}

}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n-1; ++i)
	{
		int u,v;
		cin >> u >> v;
		path[u].push_back(v);
		path[v].push_back(u);
	}
	int p;
	cin >> p;
	bfs(1);
	int ck=0;
	for (int i = 1; i <= n; ++i)
	{
		if(dis[i]==p)
			ck++;
	}
	cout << ck << endl;
}