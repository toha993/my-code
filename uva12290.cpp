#include<bits/stdc++.h>
using namespace std;
bool hbe(string s)
{
	for (int i = 0; i < s.length()-1; ++i)
	{
		for (int j = i+1; i < s.length(); ++j)
		{
			if(s[i]==s[j])
				return false;
		}
	}
	return true;

}
int main()
{
	int a,b;
	while(cin >> a >> b)
	{
		int ck=0
		string s;
		for (int i = a; i <= b; ++i)
		{
			s=to_string(i);
			if(hbe(s))
				ck++;
		}
		cout << ck << endl;
	}
}