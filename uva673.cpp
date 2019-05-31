#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	getchar();
	while(t--)
	{
		string s;
		getline(cin,s);
		//cin >> s;
		stack<char>st;
		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i]=='(' || s[i] == '[')
				st.push(s[i]);
			else if(s[i]== ')')
			{
				if(st.empty() || st.top() !='(')
				{
					st.push('x');
					break;
				}
				st.pop();
			}
			else if(s[i]== ']')
			{
				if(st.empty() || st.top() !='[')
				{
					st.push('x');
					break;
				}
				st.pop();
			}
			
		}
		//cout << st.top() << endl;
		if(st.empty())
			cout << "Yes" << endl;
		else
			cout << "No" << endl;











	}





















}