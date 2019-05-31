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

int n,m,k;
int visited[55][55]={0};
int dis[55][55];
char a[55][55];
int nibona=0,cp=0;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void dfs(int x,int y,int cur)
{
	if(x<0 || x>=n || y <0 || y>=m)
		{
			nibona=1;
			return;
		}
	if(visited[x][y] || a[x][y]=='*')
		return;
	visited[x][y]=1;
	cp++;
	dis[x][y]=cur;
	dfs(x-1,y,cur);
	dfs(x+1,y,cur);
	dfs(x,y+1,cur);
	dfs(x,y-1,cur);
}
int main()
{
	cin >> n >> m >> k;
	vector<pair<int,int>>v,vis;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
			if(a[i][j]=='.')
			{
				v.push_back({i,j});
			}
		}
	}
	//cout << v.size() << endl;
	int ck=1;
	vector<int>vt;
	for (int i = 0; i < v.size(); ++i)
	{
		if(!visited[v[i].first][v[i].second])
			{
				dfs(v[i].first,v[i].second,ck++);
				if(!nibona)vis.push_back({cp,ck-1});
				cp=0;
			}
		if(nibona==1)
		{
			vt.push_back(ck-1);
			nibona=0;
			//continue;
		}
		
	}
	//cout << vis.size() << endl;
	// cout << ck << endl;
	// for (int i = 0; i < vt.size(); ++i)
	// {
	// 	cout << vt[i] << endl;
	// }
	// for (int i = 0; i < vis.size(); ++i)
	// {
	// 	cout << vis[i].first << " " << vis[i].second << endl;
	// }
	sort(vis.begin(),vis.end());
	//cout << vis.size()-k << endl;
	int ans=vis.size()-k;
	set<int>st;
	for (int i = 0; i < vis.size(); ++i)
	{
		ans--;
		if(ans<0)
			break;
		st.insert(vis[i].second);
	}
	ans=0;
	if(st.size()!=0)
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(st.find(dis[i][j]) != st.end())
			{
				a[i][j]='*';
				ans++;
			}
		}
	}
	cout  << ans << endl;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << a[i][j];
		}
		cout << endl;
	}
}