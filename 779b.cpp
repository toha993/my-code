#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int m;
	cin >> s >> m;
	int ck=0;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='0')
			ck++;
	}
	if(ck<m)
	{
		if(ck !=0)
		cout << s.length()-1 << endl;
		else
			cout << s.length() << endl;
	}
	else
	{
		int cp=0;
		ck=0;
		for (int i =s.length()-1; i >=0; --i)
		{
			if(s[i] == '0')
				ck++;
			else
				cp++;
			if(ck==m)
				break;
		}
		cout << cp << endl;
	}
}