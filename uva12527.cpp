#include<bits/stdc++.h>
using namespace std;
bool hbe(string s)
{
	//cout << s.length() << endl;
	for (int i = 0; i < s.length()-1; ++i)
	{
		//cout << s[i] << endl
		for (int j = i+1; j < s.length(); ++j)
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
		int ck=0;
		string s;
		for (int i = a; i <= b; ++i)
		{
			s=to_string(i);
			//cout << s << endl;
			if(hbe(s))
				ck++;
		}
		cout << ck << endl;
	}
}