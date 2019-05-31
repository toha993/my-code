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

stack<char>st;
int main()
{
	string s;
	cin >> s;
	int ck=0;
	for (int i = 0; i < s.length(); ++i)
	{
		if(!st.empty())
		{
			if(st.top()==s[i])
				{
					ck++;
					st.pop();
				}
			else
				st.push(s[i]);
		}
		else
			st.push(s[i]);
	}
	if(ck==0)
	{
		cout << "No" << endl;
		return 0;
	}
	if(ck%2)
	{
		cout << "Yes" << endl;
	}
	else
		cout << "No" << endl;










}