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


int a[105];
int main()
{
	int p;
	cin >> p;
	vector<int>v;
	int m[105]={0};
	for (int i = 0; i < p; ++i)
	{
		cin >> a[i];
		m[a[i]]++;
		//cout << m[a[i]] << endl;
		if(m[a[i]]==1)
		{
			v.push_back(a[i]);
		}
	}
	sort(v.begin(),v.end());
	if(v.size()==1)
	{
		cout << 0 << endl;
		return 0;
	}
	else if(v.size()==2)
	{
		if((v[1]-v[0])%2)
		{
			cout << (v[1]-v[0]) << endl;
			return 0;
		}
		else
		{
			cout << (v[1]-v[0])/2 << endl;
			return 0;
		}
	}
	else if(v.size()==3)
	{
		int dif=v[1]-v[0];
		for (int i = 2; i < v.size(); ++i)
		{
			if(v[i]-v[i-1] !=dif)
			{
				cout << -1 << endl;
				return 0;
			}
		}
		cout << dif << endl;
		return 0;
	}
	else
	{
		cout << -1 << endl;
		return 0;
	}

}