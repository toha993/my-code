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

int a[1005];
pair<pair<int,int>,int>p[1005];
pair<pair<int,int>,int>g[1005];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int a,b;
		cin >> a >> b;
		p[i].second=i+1;
		p[i].first.first=b;
		p[i].first.second=a;
	}
	sort(p,p+n);
	/*for (int i = 0; i <n; ++i)
	{
		cout << p[i].first << " " << p[i].second << endl;
	}*/
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		cin >> a[i];
		g[i].first.first=a[i];
		g[i].first.second=0;
		g[i].second=i+1;
	}
	sort(g,g+m);
	int ck=0,ans=0,np=0,j;
	pair<int,int>pbe[1005];
	for (int i = n-1;i>=0;i--)
	{
		for (j=0; j < m;j++)
		{
			//cout << p[i].first  << " " << a[j] << endl;
			if(p[i].first.second > g[j].first.first || g[j].first.second)
				continue;
			ck++;
			g[j].first.second=1;
			ans+=p[i].first.first;
			pbe[np].first=p[i].second;
			pbe[np].second=g[j].second;
			np++;
			break;
		}
	}
	sort(pbe,pbe+np);
	cout << ck << " " << ans << endl;
	for (int i = 0; i <np; ++i)
	{
		cout << pbe[i].first << " " << pbe[i].second << endl;
	}






}