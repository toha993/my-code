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
int dis[1000][1000];
int inf=1000000000;
//bool visited[1000][1000];
int a[1000][1000];
int x,y;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void dijkstra(int n,int m,int cst)
{
	priority_queue<pair<int,pair<int,int>>>q;
	q.push({0,{n,m}});
	dis[n][m]=0;
	while(!q.empty())
	{
		int w=q.top().first;
		int u=q.top().second.first;
		int v=q.top().second.second;
		for (int i = 0; i < 4; ++i)
		{
			/* code */
		}
	}

}
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		
		cin >> x >> y;
		for (int i = 0; i < x; ++i)
		{
			for (int j = 0; j < y; ++j)
			{
				cin >> a[i][j];
				dis[i][j]=inf;
			}
		}
	//	memset(visited,0,sizeof(visited));
		dis[0][0]=0;
		dijkstra(0,0,0);
		cout << dis[x-1][y-1] << endl;
		// for (int i = 0; i < x; ++i)
		// {
		// 	for (int j = 0; j < y; ++j)
		// 	{
		// 		cout << dis[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
	}

}