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
#define pb push_back
#define sc second
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
		vector<pair<pair<int,int>,int>>v;
		int n;
		cin >> n;
		for (int i = 0; i < 3*n; ++i)
		{
			int x,xd;
			cin >> x >>xd;
			v.pb({{x,xd},i});
		}
		sort(v.begin(),v.end());
		for (int i = 0; i <3*n;i +=3)
		{
			cout << v[i].sc+1 << " " << v[i+1].sc+1 << " " <<  v[i+2].sc+1 << endl;
		}
		//v.clear();
	}
}