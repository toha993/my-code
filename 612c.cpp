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
	string s;
	int ck=0,cp=0,m=0;
	cin >> s;
	//map<char,int>mp;
	stack<char>st;
	for (int i = 0; i < s.length(); ++i)
	{
		   if(s[i]=='<' || s[i]=='{' || s[i]=='[' || s[i]=='(')
			{
				ck++;
				st.push(s[i]);
			}
			else
			{
			if(st.empty())
			{
				cout << "Impossible" << endl;
				return 0;
			}
			if(s[i]== ')' && !st.empty())
			{
				if(st.top() !='(')
				{
					m++;
				}
				st.pop();
			}
			else if(s[i]== ']' && !st.empty())
			{
				if(st.top() !='[')
				{
					m++;
				}
				st.pop();
			}
			else if(s[i]== '>' && !st.empty())
			{
				if(st.top() !='<')
				{
					m++;
				}
				st.pop();
			}
			else if(s[i]== '}' && !st.empty())
			{
				if(st.top() !='{')
				{
					m++;
				}
				st.pop();
			}
		}

		
	}
	//cout << cp << " " << ck << endl;
	if(!st.empty())
	{
		cout << "Impossible" << endl;
		return 0;
	}
	else
		cout << m << endl;
	

}