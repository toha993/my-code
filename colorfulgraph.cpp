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
#define ll long long
using namespace std;
const int mx = 100002;
set<int> graph[mx];
int main()
{
	int n, m;
	cin >> n >> m;
	int color[n + 1];
	for(int i = 1; i <= n; i++) {
		cin >> color[i];
	}
	for(int i = 1; i <= m; i++) {
		int u, v;
		cin >> u >> v;
		if(color[u] == color[v]) continue;
		graph[color[u]].insert(color[v]);
		graph[color[v]].insert(color[u]);
	}
	int ans = 0;
	for(int i = 1; i <= n; i++) {
		cout << i << " " << (int) graph[i].size() << endl;
		ans = max(ans, (int) graph[i].size());
	}
	cout << ans << endl;
 	return 0;
}




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
	string s[10];
	int p,q;
	cin >> p >> q;
	for (int i = 0; i < p; ++i)
	{
		cin >> s[i];
	}
	//cout << s[0] << endl;
	int dif=1000000000;
	string qq=s[0];
	while(next_permutation(qq.begin(),qq.end()))
	{
		int mx=0;
		int mn=1000000000;
		stringstream ss(qq);
		int x=0;
		ss >>x;
		mx=max(x,mx);
		mn=max(x,mn);
		for (int i = 1; i < p; ++i)
		{
			string px=s[i];
			next_permutation(px.begin(),px.end());
			s[i]=px;
			stringstream xs(px);
			int as=0;
			xs >> as;
			mx=max(as,mx);
			mn=max(as,mn);
		}
		dif=min(mx-mn,dif);
	}
	cout << dif << endl;


}