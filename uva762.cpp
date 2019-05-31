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
int suru,dest;
bool visited[2000];
int root[2005];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
vector<int>path[2005];
int bfs(int n)
{
	memset(visited,0,sizeof(visited));
	queue<int>q;
	q.push(n);
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
				root[v]=u;
				if(v != dest)
					q.push(v);
				else
					return 1;
			}
		}
	}
	return 0;
}
string s[100005];
int main()
{
	int n;
	int flag=0;
	while(cin >> n)
	{
		if(flag)
			cout << endl;
		flag=1;
		map<string,int>mp;
		int k=1; 		
		while(n--)
		{
			string u,v;
			cin >> u >> v;
			if(mp[u]==0)
				{
					s[k]=u;
					mp[u]=k++;
				}
			if(mp[v]==0)
				{
					s[k]=v;
					mp[v]=k++;
				}

			path[mp[v]].push_back(mp[u]);
			path[mp[u]].push_back(mp[v]);
		}
		string x,z;
		cin >> x >> z;
		int lgbena=0;
		if(mp[z]==0 || mp[x]==0 )
			lgbena=1;
		suru=mp[x];
		dest=mp[z];
		int xd=bfs(mp[x]);
		vector<pair<string,string>>sp;
		if(xd && !lgbena)
		{
			while(root[dest] != suru)
			{
				sp.push_back({s[root[dest]],s[dest]});
				dest=root[dest];
			}
			sp.push_back({s[root[dest]],s[dest]});
			for (int i = sp.size()-1; i>=0; --i)
			{
				cout << sp[i].first << " " << sp[i].second << endl;
			}
		}
		else
			cout << "No route" << endl;

		mp.clear();
		sp.clear();
		//s.clear();
		for (int i = 0; i <= 2000; ++i)
		{
			s[i].clear();
			path[i].clear();
		}
	}
}