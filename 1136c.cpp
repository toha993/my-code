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
//editorial
vector<int>v[505*2],vt[505*2];
int main()
{
	int p,q;
	cin >> p >> q;
	int mx=max(p,q);
	for (int i = 0; i < p; ++i)
	{
		for (int j = 0; j < q; ++j)
		{
			int x;
			cin >> x;
			v[i+j].push_back(x);
		}
	}
	for (int i = 0; i < p; ++i)
	{
		for (int j = 0; j < q; ++j)
		{
			int x;
			cin >> x;
			vt[i+j].push_back(x);
		}
	}
	for (int i = 0; i < mx*2; ++i)
	{
		sort(v[i].begin(),v[i].end());
		sort(vt[i].begin(),vt[i].end());
		if(v[i]!=vt[i])
		{
			cout << "NO" << endl;
			return 0;
		}

	}
	cout << "YES" << endl;
}