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
int color[205];
int visited[205];
vector<int>path[205];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int dfs(int p)
{
	visited[p]=1;
	for (int i = 0; i < path[p].size(); ++i)
	{
		int x=path[p][i];
		if(!visited[x])
		{
			visited[x]=1;
			color[x] = color[p]^1;
			dfs(x);
		}
		else if(color[p] ^ color[x]==0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n;
	while(cin >> n &&  n)
	{	
		int t ;
		cin >> t;
		for (int i = 0; i < t; ++i)
		{
			int u,v;
			cin >>  u>> v;
			path[u].push_back(v);
			path[v].push_back(u);			
		}
		memset(color,0,sizeof(color));
		memset(visited,0,sizeof(visited));
		if(dfs(0))
		{
			cout << "BICOLORABLE." << endl;
		}
		else
			cout << "NOT BICOLORABLE." << endl;
		for (int i = 0; i < n; ++i)
		{
			path[i].clear();
		}

	}
}