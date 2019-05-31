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

	// #include <ext/pb_ds/assoc_container.hpp>
	// #include <ext/pb_ds/tree_policy.hpp>
	// using namespace __gnu_pbds;
	// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


	stack<ll>stk;
	vector<ll>ulta[300005],compo[300005];
	int visited[300005],vis[300005];
	vector<int>v[300005]; 
	set<int> graph[300005];
	int p;
	int mark, componentNo[300005];
	void dfs(int pq)
	{
		visited[pq]=1;
		for (int i = 0; i <v[pq].size() ; ++i)
		{
			int l=v[pq][i];
			if(visited[l]==0)
			{
				dfs(l);
			}
		}
		stk.push(pq);
	}
	void rvrs()
	{
		for (int i = 1; i <= p; ++i)
		{
			for (int j = 0; j < v[i].size(); ++j)
			{
				int x=v[i][j];
				ulta[x].push_back(i);
			}
		}
	}
	void dfs2(int u,int mark)
	{
		componentNo[u] = mark;
		compo[mark].push_back(u);
		vis[u]=1;
		for (int i = 0; i <ulta[u].size(); ++i)
		{
			int x=ulta[u][i];
			if(vis[x]==0)
			{
				dfs2(x,mark);
			}
		}
	}
	void make_scc()
	{
		mark=0;
		for (int i = 1; i <= p; ++i)
		{
			if(visited[i]==0)
				dfs(i);
		}
		rvrs();
		int u;
		while(!stk.empty())
		{
			u=stk.top();
			stk.pop();
			if(vis[u]==false)
			{
				mark=mark+1;
				dfs2(u,mark);
			}
		}

	}
	stack <int> STACK;
	int dp[300005];
	/*void rec(int u) {
		vis[u] = 2;
		for(int v : graph[u]) {
			if(vis[v] == 2) continue;
				rec(v);
		}
		STACK.push(u);
	}*/
	int distance(int u) {
		if(vis[u] == 3) {
			return dp[u];
		}
		vis[u] = 3;
		dp[u] = 0;
		for(int v : graph[u]) {
			dp[u] = max(dp[u], 1 + distance(v));
		}
		return dp[u];
	}
	int dist = 0;
	void distance2(int u, int d) {
		dist = max(dist, d);
		for(int v : graph[u]) {
			distance2(v, d + 1);
		}
	}
	//vector<int>v;
	int main()
	{
		ios_base::sync_with_stdio(false);
		int n,m;
		cin >> p >> m;
		for (int i = 1; i <= m; ++i)
		{
			int a,b;
			cin >> a >>b;
			v[a].push_back(b);
		}
		make_scc();
		for(int i = 1; i <= p; i++) {
			for(int u :  v[i]) {
				if(componentNo[i] != componentNo[u]) {
					graph[componentNo[i]].insert(componentNo[u]);
				}
			}
		}

		/*for(int i = 1; i <= mark; i++) {
			if(vis[i] != 2) {
				rec(i);
			}
		}*/
		// int ans = 0;
		// while(!STACK.empty()) {
		// 	int t = STACK.top();
		// 	STACK.pop();
		// 	if(vis[t] != 3) {
		// 		//distance2(t, 0);
		// 		ans = max(distance(t), ans);
		// 	}
		// }
		int ans = 0;
		for(int i = 1; i <= mark; i++) {
			if(vis[i] != 3) {
				ans = max(ans, distance(i));
			}
		}
		cout << ans << endl;
		return 0;
	}