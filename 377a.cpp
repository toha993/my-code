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

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
string s[555];
int pk=0;
int n,m,k,x,y,ck=0;
bool visited[555][555]={0};
void dfs(int x,int y)
{
	//cout << pk << endl;
	if(x<0 || x>=n || y<0 || y>=m || pk >=ck-k)
		return;
	if(s[x][y]=='#' || visited[x][y])
		return;
	visited[x][y]=1;
	pk++;
	dfs(x,y+1);
	dfs(x,y-1);
	dfs(x+1,y);
	dfs(x-1,y);
}

int main()
{
	cin >> n >> m >> k;
	for (int i = 0; i < n; ++i)
	{
		cin >> s[i];
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(s[i][j]=='.')
			{
				x=i,y=j;
				ck++;
			}
		}
	}
	dfs(x,y);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(s[i][j]=='.' && visited[i][j]==0)
				s[i][j]='X';
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout  << s[i] << endl;
	}

}