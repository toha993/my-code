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

int a[120005];
int main()
{
	int n;
	cin >> n;
	map<int,int>mp;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << mp[a[i]] << endl;
	// }
	int ck=0;
	for (int i = 0; i <n; ++i)
	{
		int hbe=0;
		for (int j =0; j < 31; ++j)
		{
			int p=0;
			p= (1 << j) - a[i];
			if(mp.count(p) && (mp[p]>=2 || (mp[p]==1 && p != a[i])))
			{
				//cout << p << endl;
				hbe=1;
			}
		}
		if(hbe==0)
			ck++;
	}
	cout << ck << endl;
}