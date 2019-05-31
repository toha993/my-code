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
	cin >> n;
	while(n--)
	{
		int p;
		string s;
		cin >> p >> s;
		if(p<11)
		{
			cout << "NO" << endl;
			continue;
		}
		else
		{
			int cp=1;
			for (int i = 0; i <= s.length()-11; ++i)
			{
				if(s[i]=='8')
				{
					cout << "YES" << endl;
					cp=0;
					break;
				}
			}
			if(cp)
			{
				cout << "NO" << endl;
			}
		}
	}
}