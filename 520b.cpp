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
int m,sz=1000000;
int visited[200005],dis[200005];
void dfs(int n,int lvl)
{
	if(n<=0||n>=2*m)
		return;
	if(visited[n]&&dis[n]<=lvl)
		return;
	if(n==m)
	{
		sz=min(lvl,sz);
		return;
	}
	visited[n]=1;
	dis[n]=lvl;
	dfs(2*n,lvl+1);
	dfs(n-1,lvl+1);
}
int main()
{
	int n;
	cin >> n >> m;
	if(n>m)
	{
		cout << n-m << endl;
		return 0;
	}
	dfs(n,0);
	cout << sz << endl;
}