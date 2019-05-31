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
	int t;
	cin >> t;
	while(t--)
	{
		map<int,int>mp;
		int n,m;
		cin >> n >> m;
		int a[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		int paisi=0;
		for (int i = 0; i < n; ++i)
		{
			if((mp[m-a[i]]==1 && m-a[i] !=a[i]) || (m-a[i]==a[i] && mp[a[i]]>1))
			{
				//cout << m-a[i] << endl;
				paisi=1;
				cout << "Yes" << endl;
				break;
			}
		}
		if(!paisi)
			cout << "No" << endl;
		mp.clear();
	}
}