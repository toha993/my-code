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
vector<int>path[10005];
int mx=0;
int visited[10005];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int dfs(vector<int>path[],int p)
{
	int sz=0,sz1=0;
	visited[p]=1;
	int v=0;
	for (int i = 0;i < path[p].size();++i)
		{
			if(!visited[path[p][i]])
			{
				v=dfs(path,path[p][i]);
				if(v>=sz)
				{
					sz1=sz;
					sz=v;
				}
				else if(v>sz1)
					sz1=v;
			}
		}
	mx=max(mx,sz+sz1);
	return sz+1;
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
	memset(visited,0,sizeof(visited));
	dfs(path,1);
	cout << mx << endl;

}