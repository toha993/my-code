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

queue<int>q;
vector<pair<int,int>>v;
int degree[100005],x0r[100005];
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> degree[i] >> x0r[i];
		if(degree[i]==1)
		{
			q.push(i);
		}
	}
	while(!q.empty())
	{
		int u=q.front();
		q.pop();
		int vc=x0r[u];
		if(degree[u]==0)
			continue;
		v.push_back({u,vc});
		degree[vc]--;
		x0r[vc]=(x0r[vc]^u);
		if(degree[vc]==1)
			q.push(vc);
	}
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i].first << " " << v[i].second << endl;
	}
}