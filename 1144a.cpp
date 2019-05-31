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
	while(t--)
	{
		string s;
		cin >> s;
		int cp=0;
		sort(s.begin(),s.end());
		for (int i = 0; i < s.length()-1; ++i)
		{
			if(s[i+1]-'0'==(s[i]-'0')+1)
				continue;
			else
			{
				cp=1;
				break;
			}
		}
		if(cp)
			cout << "No" << endl;
		else 
			cout << "Yes" << endl;

	}
}