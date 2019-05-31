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
#define mod 1000000007
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
stack<ll>stk;
vector<ll>ulta[300005],compo[300005];
bool visited[100005],vis[100005];
vector<int>v[100005];
int p;
int mark;
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
ll tk[100005];
int main()
{
	//int p;
	cin >> p;
	for (int i = 1; i <= p; ++i)
	{
		cin >> tk[i];
	}
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int a,b;
		cin >> a >> b;
		v[a].push_back(b);
	}
	make_scc();
	vector<ll>vt[100005];
	long long mini=0,way=1,cnt=0;
	for (int i = 1; i <= mark; ++i)
	{
		for (int j = 0; j <compo[i].size(); ++j)
		{
			int lm=compo[i][j];
			vt[i].push_back(tk[lm]);
		}
		sort(vt[i].begin(),vt[i].end());
		mini +=vt[i][0];
		cnt=1;
		for (int j = 0; j<vt[i].size()-1 ; ++j)
		{
			if(vt[i][j]==vt[i][j+1])
				cnt++;
			else
				break;
		}
		way =((way%mod)*(cnt%mod))%mod;
	}
	cout << mini << " " << way << endl;
}