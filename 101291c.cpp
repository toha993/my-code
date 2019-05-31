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

int a[300005];
vector<int>v,vt;
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
	}
	if(n==3 || n==4)
	{
		cout << -1 << endl;
		return 0;
	}
	if(n &1)
		{
			for (int i = 1; i <=n; ++i)
		{
			if(i>n/2)
				v.push_back(a[i]);
			else
				vt.push_back(a[i]);
		}
		//swap(vt[vt.size()-1],vt[vt.size()-2]);
		for (int i = 0; i <v.size(); ++i)
		{
			if(i!=v.size()-1)
			cout << v[i] << " " << vt[i] << " ";
			else
				cout << v[i] <<endl;
		}
	}
	else
	{
		for (int i = 1; i <=n; ++i)
		{
			if(i>n/2)
				v.push_back(a[i]);
			else
				vt.push_back(a[i]);
		}
		swap(vt[vt.size()-1],vt[vt.size()-2]);
		for (int i = 0; i <v.size(); ++i)
		{
			if(i!=v.size()-1)
			cout << v[i] << " " << vt[i] << " ";
			else
				cout << v[i] << " " << vt[i] << endl;
		
	}
}
}