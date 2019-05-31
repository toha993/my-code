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
bool visited[105][105];
char a[105][105];
int n,m;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void dfs(int x,int y)
{
	if(x<0 || x>=n || y<0 || y >= m)
		return;
	if(visited[x][y]==1 || a[x][y]=='*')
		return;
	visited[x][y]=1;
	//cout << x << " " << y << endl;
	dfs(x+1,y);
	dfs(x+1,y+1);
	dfs(x+1,y-1);
	dfs(x,y-1);
	dfs(x,y+1);
	dfs(x-1,y);
	dfs(x-1,y-1);
	dfs(x-1,y+1);
	

}
int main()
{
	
	while(cin >> n >> m)
	{
		//cout << n << " " << m << endl;
		if(n==0 && m==0)
			break;
		memset(visited,0,sizeof(visited));
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> a[i][j];
			}
		}
		int ck=0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				if(a[i][j]=='@' && visited[i][j]==0)
					{
						dfs(i,j);
						//cout << i << " " << j << endl;
						ck++;
					}
			}
		}
		cout << ck << endl;
	}


}