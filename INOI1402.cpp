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
#define inf 100000000
using namespace std;
//solution
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
//vector<int>path[100005],cost[100005];
//int dis[30000],vis[30000]={0};
int main()
{
	int n,p;
	cin >> n >> p;
	int graph[n][n],dis[n][n];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			graph[i][j]=inf;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		graph[i][i]=0;
	}
	for (int i = 0; i < p; ++i)
	{
		int x,y,z;
		cin >> x >> y >> z;
		graph[x-1][y-1]=z;
		graph[y-1][x-1]=z;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			dis[i][j]=graph[i][j];
		}
	}
	for (int k = 0; k < n; ++k)
	{
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if(dis[i][k]+dis[k][j] < dis[i][j])
					{
						dis[i][j]=dis[i][k]+dis[k][j];
					}
			}
		}
	}
	int mx=0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			mx=max(mx,dis[i][j]);
		}
	}
	cout << mx << endl;









}