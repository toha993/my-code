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
	cin >>t;
	for (int i = 0; i < t; ++i)
	{
		int p;
		cin >> p;
		string s;
		cin >> s;
		int cp=0,cn=0;
		if(s[0]=='>')
		{
			cout << 0 << endl;
			continue;
		}
		for (int j = 0; j < s.length(); ++j)
		{
			
			if (s[j]=='<')
			{
				cp++;
			}
			else break;
		}
		for (int j = s.length()-1; j>=0 ; j--)
		{
			if(s[j]=='>')
				cn++;
			else
				break;
		}
		cout << min(cn,cp) << endl;

		
	}
}