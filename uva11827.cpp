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
	string p;
	getline(cin,p);
	while(t--)
	{
		string s;
		getline(cin,s);
		stringstream ss(s);
		vector<int>v;
		int num;
		while(ss >> num)
			v.push_back(num);
		// for (int i = 0; i < v.size(); ++i)
		// {
		// 	cout <<  v[i] << endl;
		// }
		int mx=1;
		for (int i = 0; i < v.size()-1; ++i)
		{
			for (int j = i+1; j < v.size(); ++j)
			{
				if(v[i] > v[j])
					mx=max(mx,__gcd(v[i],v[j]));
				else
					mx=max(mx,__gcd(v[j],v[i]));
			}
		}
		cout << mx << endl;
		v.clear();
	}
}