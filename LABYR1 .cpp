
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
vector<pair<int,int>>v;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int mx,sx,sy;
int p,q;
char a[1005][1005];
bool vis[1005][1005];
void dfs(int x,int y,int level)
{
	if(x>=q || x<0 || y <0 || y >=p )
		return;
	if(a[x][y]=='#' || vis[x][y])
		return;
	vis[x][y]=1;
	if(level>mx)
	{
		mx=level;
		sx=x,sy=y;
	}
	dfs(x+1,y,level+1);
	dfs(x-1,y,level+1);
	dfs(x,y-1,level+1);
	dfs(x,y+1,level+1);
	vis[x][y]=0;
	level--;
	//sx=x,sy=y;
}
 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		
		cin >> p >> q;
		for (int i = 0; i < q; ++i)
		{
			for (int j = 0; j < p; ++j)
			{
				cin >> a[i][j];
				if(a[i][j]=='.')
				{
					v.push_back(make_pair(i,j));
				}
			}
		}
	//int mx1=0;
	memset(vis,0,sizeof(vis));
	mx=0;
	dfs(v[0].first,v[0].second,0);
	//mx1=mx;
	mx=0;
	vis[sx][sy]=0;
	dfs(sx,sy,0);
	cout << "Maximum rope length is " <<  mx << "." <<  endl; 
	v.clear();
 
	}
} 