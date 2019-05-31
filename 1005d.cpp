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
#define ll long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	string s;
	cin >> s;
	ll ck=0;
	//ll g=10;
	for (int i = 0; i < s.length(); ++i)
	{
		ll p=1;
		if(s[i]=='0' || s[i]=='3' || s[i] == '6' || s[i]=='9')
			{
				//cout << s[i] << endl;
				ck++;
				continue;
			}
		ll suru = s[i]-48;
		for (int j = i+1; j < s.length(); ++j)
		{
			p++;
			if(s[j]=='0' || s[j]=='3' || s[j] == '6' || s[j]=='9' || p==3)
			{
				//cout  << s[j] << endl;
				ck++;
				i=j;
				break;
			}
			int x=s[j]-48;
			suru +=x;
			//cout << suru << endl;
			if(suru%3==0)
			{
				//cout << suru << endl;
				ck++;
				i=j;
				suru=0;
				break;
			}
			else if(suru >=30)
				suru %=30;

			//cout <<suru << endl;
		}
	}
	cout << ck << endl;
}