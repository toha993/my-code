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


int main()
{
	int n,m;
	cin >> n >> m;
	char a[n+1][m+1];
	bool vis[m+1];
	memset(vis,0,sizeof(vis));
	for (int i = 0; i <n ; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
		}
	}
	int ck=0;
	for (int i = 0; i+1 < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(vis[j] || a[i][j]==a[i+1][j])
				continue;
			else if (a[i][j]<a[i+1][j])
			{
				break;
			}
			else if(a[i][j]>a[i+1][j])
			{
				vis[j]=1;
				i=-1;
				ck++;
				break;
			}
			
		}
	}
	cout << ck << endl;
}