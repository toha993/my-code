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
	int n,m;
	cin >> n >> m;
	map<string,int>mp;
	while(n--)
	{
		string s;
		int q;
		cin >> s >> q;
		mp[s]=q;
		// << s << " " << mp[s] << endl;
	}
	while(m--)
	{
		string sq;
		long long ans=0;
		while(getline(cin,sq))
		{
			if(sq.compare(".")==0)
				break;
			string sd;
			//int ans=0;
		stringstream ss(sq);
		while(ss >> sd)
		{
			if(mp[sd] != 0)
				ans +=mp[sd];
		}
		//cout << ans << endl;
		}
		cout << ans << endl;
	}
}