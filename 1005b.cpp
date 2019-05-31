#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,p,m,n;
	cin >> p >> s;
	reverse(p.begin(),p.end());
	reverse(s.begin(),s.end());
	if(p==s)
	{
		cout << 0 << endl;
		return 0;
	}
	int ans,ans1;
	if(s.length()>p.length())
		{
			m=p;
			p=s;
			s=m;
		}
	for(int i=0;i<p.length();i++)
	{
		if(p[i] != s[i])
		{
			ans=s.length()-i;
			ans1=p.length()-i;
			break;
		}
		if(i+1==s.length())
		{
			ans=0;
			ans1=p.length()-(i+1);
			break;
		}
	}

	cout << ans+ans1 << endl;
















}