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

vector<int>v;
int  main()
{
	int n,p;
	cin >> n >> p;
	int xd=n;
	while(n--)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	int l=0,r=(v.size()+1)/2;
	int ck=0;
	while(r<xd)
	{
		//cout << v[r]-v[l] << endl;
		if(v[r]-v[l] >=p)
		{
			l++;
			r++;
			ck++;
		}
		else
			r++;

	}
	cout << ck << endl;
}