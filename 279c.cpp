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

int a[100005],samne[100005],piche[100005];
int main()
{
	int n,m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; ++i)
	{
		if(a[i]>a[i-1])
			samne[i]=i;
		else
		{
			samne[i]=samne[i-1];
		}
	}
	for (int i = n; i >= 1; --i)
	{
		if(a[i]>a[i+1])
			piche[i]=i;
		else
		{
			piche[i]=piche[i+1];
		}
	}
	// for (int i = 1; i <= n; ++i)
	// {
	// 	cout << samne[i] << " ";
	// }
	// cout << endl;
	// for (int i = 1; i <= n; ++i)
	// {
	// 	cout << piche[i] << " ";
	// }
	//cout << endl;
	for (int i = 0; i < m; ++i)
	{
		int p,q;
		cin >> p >> q;
		if(p==q || q-p==1)
		{
			cout << "Yes" << endl;
			continue;
		}
		if(piche[q]==p || samne[q]==p)
		{
			cout<< "Yes" << endl;
			continue;
		}
		else
		{
			//cout << mn[p] << " " << samne[q] << endl;
			if(piche[p]>=samne[q])
			{
				cout << "Yes" << endl;
				continue;
			}
			else
				cout << "No" << endl;

		}
	}

}