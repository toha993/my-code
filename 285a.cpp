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
	int p,k;
	vector<int>v,vt;
	cin >> p >> k;
	for(int i=1;i<p-k;i++)
	{
		v.push_back(i);
	}
	for(int i=p;i>=1;i--)
	{
		if(k==-1)
			break;
		vt.push_back(i);
		k--;
	}
	for (int i = 0; i < v.size(); ++i)
	{
		if(!vt.empty())
		cout << v[i] << " ";
		else
		{
			if(i!=v.size()-1)
				cout << v[i] << " ";
			else
				cout << v[i];
		}

	}
	for (int i = 0; i < vt.size(); ++i)
	{
		
		if(i !=vt.size()-1)
		cout << vt[i] << " ";
		else
			cout << vt[i];
	}
	cout << endl;
}
