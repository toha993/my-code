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

int a[]={4,7,44,47,72,77,444,447,474,477,744,747,774,777};
int main()
{
	string s;
	int p,i;
	cin >> p;
	s=to_string(p);
	for (i = 0; i <s.length(); ++i)
	{
		if(s[i]=='4' || s[i]=='7')
			continue;
		else
			break;
	}
	if(i!=s.length())
	{
		for (int j = 0; j < 14; ++j)
		{
			if(a[j]>p)
				break;
			if(p%a[j]==0)
			{
				cout << "YES" << endl;
				return 0; 
			}
		}
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;

}