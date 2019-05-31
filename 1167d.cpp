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
int a[200005];
stack<int>st;
int main()
{
	int n;
	string s;
	cin >> n >> s;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='(')
		{
			if(!st.empty())
			{
				if(st.top()==1)
				{
					st.push(0);
					a[i]=0;
				}
				else
				{
					st.push(1);
					a[i]=1;
				}
			}
			else
			{
				st.push(1);
				a[i]=1;
			}
		}
		else
		{
			//cout << i << " " << st.top() << endl;
			if(st.top()==1)
			{
				a[i]=1;
				st.pop();
			}
			else
			{
				a[i]=0;
				st.pop();
			}
		}
	}
	for (int i = 0; i < s.length(); ++i)
	{
		cout << a[i];
	}
	cout << endl;
}