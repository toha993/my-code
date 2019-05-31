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
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
struct node
{
    int x,y,c;

    node(int d,int e,int f)
    {
        x=d;
        y=e;
        c=f;
    }
    bool operator<(const node &p)const
    {
        return c>p.c;
    }
};
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void dijkstra(int n,int m,int cst)
{
	priority_queue<node>q;
	q.push(node(n,m,cst));
	dis[n][m]=cst;
	while(!q.empty())
	{
		node zx=q.top();
		int u=zx.x;
		int v=zx.y;
		q.pop();
		for (int i = 0; i < 4; ++i)
		{
			int mn=u+dx[i];
			int ny=v+dy[i];
			if(mn>=x || mn<0 || ny>=y || ny <0)
				continue;
			if(dis[mn][ny] > dis[u][v] +a[mn][ny])
			{
				dis[mn][ny] = dis[u][v] + a[mn][ny];
				q.push(node(mn,ny,dis[mn][ny]));
			}
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
		dis[0][0]=0;
		dijkstra(0,0,a[0][0]);
		cout << dis[x-1][y-1] << endl;
	}

}