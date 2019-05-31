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
int order(char x)
{
	if(x=='^')
		return 5;
	if(x=='/')
		return 4;
	if(x=='*')
		return 3;
     if(x=='-')
		return 2;
	if(x=='+')
		return 1;
}

int main()
{
	int t;
	string s;
	cin >> t;
	getline(cin,s);
	while(t--)
	{
		stack<char>b;
		getline(cin,s);
		int i=0,j=-1;
		while(s[i] != '\0')
		{
			if(isalpha(s[i]))
			{
				cout << s[i++]; 
			}
			else
			{
				if(s[i]=='\0')
					break;
				if(s[i] != '(' && s[i] != ')')
				{
					while(order(s[i]) <= b.top() && b.top() != '(')
					{
						cout << b.top();
						b.pop();
					}
					b.push(s[i++]);
				}
				else if(s[i]=='(')
				{
					b.push(s[i++]);
				}
				else if(s[i]==')')
				{
					while(b.top() != '(')
					{
						cout << b.top();
						b.pop();
					}
					if(b.top()=='(')
					{
						b.pop();
					}
				i++;
				}
			}
		}
		cout << endl;
	}

}