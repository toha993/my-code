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
int inf=1000000000;
vector<int>path[105],cost[105];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int p,q,r,s;
typedef pair<int,int>pi;
int ck;
int dis[105];
void djk(int bla)
{
	ck=0;
	for (int i = 0; i <= p; ++i)
	{
		dis[i]=inf;
	}
	priority_queue<pi>q;
	q.push(pi(bla,0));
	dis[bla]=0;
	while(!q.empty())
	{
		int u=q.top().first;
		int ucost=q.top().second;
		q.pop();
		//cout << u <<  " " << ucost << endl;
		if(dis[u]<=r)
		{
			for (int i = 0; i <path[u].size(); ++i)
			{
				int v=path[u][i];
				int vcost=cost[u][i];
				if(dis[v] > ucost+vcost)
				{
					dis[v]=ucost+vcost;
					q.push(pi(v,dis[v]));
				}
			}
		}
	}
	for (int i = 1; i <=p; ++i)
	{
		if(dis[i]<=r)
			ck++;
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	while(n--)
	{
		
		cin >> p >> q >> r >> s;
		while(s--)
		{
			int u,v,w;
			cin >> u >> v >> w;
			path[v].push_back(u);
			cost[v].push_back(w);
		}
		djk(q);
		if(n !=0)
		cout << ck << endl << endl;
		else
			cout << ck << endl;
		for (int i = 0; i <=p; ++i)
		{
			path[i].clear(),cost[i].clear();
		}

	}
	return 0;
}