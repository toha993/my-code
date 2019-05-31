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
	int n;
	while(cin >> n && n)
	{
		//v.push_back(n);
		vector<int>v,bal;
		while(n)
		{
			v.push_back(n);
			cin >> n;
		}
		unique(v.begin(),v.end());
		//bal.push_back(v[0]);
		for (int i = 1; i < v.size(); ++i)
		{
			v[i] -=v[i-1];
			bal.push_back(v[i]);

		}
		int g=abs(bal[0]);
		for (int i = 0; i < bal.size(); ++i)
		{
			g=__gcd(g,abs(bal[i]));
		}
		cout << g << endl;
		//mp.clear();
	}
}