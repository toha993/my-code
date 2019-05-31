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
#define endl "\n"
using namespace std;

// seen ;
string s[55];
int a,b,visited[55][55],flag;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void dfs(int x,int y,char m,int xx,int yy,int k)
{
	if(x>=a || x< 0 || y>=b || y < 0 )
		return;
	else if(x==xx && y==yy && k >=4)
	{
		flag=1;
		cout << "Yes" << endl;
		return;
	}
	else if(visited[x][y] || s[x][y]!=m)
		return;
	visited[x][y]=1;
	dfs(x,y+1,m,xx,yy,k+1);
	dfs(x,y-1,m,xx,yy,k+1);
	dfs(x+1,y,m,xx,yy,k+1);
	dfs(x-1,y,m,xx,yy,k+1);
}

int main()
{
	//int a,b;
	cin >> a >> b;
	for (int i = 0; i < a; ++i)
	{
		cin >> s[i];
	}
	for (int i = 0; i < a; ++i)
	{
		for (int j = 0; j < b; ++j)
		{
			memset(visited,0,sizeof(visited));
			if (flag==0){
				dfs(i,j,s[i][j],i,j,0);
			}
		}
	}
	if(flag==0)
	{
		cout << "No" << endl;
	}

}