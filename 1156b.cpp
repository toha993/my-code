#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		string xd=s;
		sort(s.begin(),s.end());
		map<int,int>mp;
		int cp=0,cd=0;
		string p,q;
		for (int i = 0; i < s.length(); ++i)
		{
			//mp[s[i]-48]++;
			if((s[i]-48)%2==0)
				p +=s[i];
			else
				q +=s[i];
		}
		//cout << p << " " << q << endl;
		int len1=p.length();
		int len2=q.length();
		if(abs(p[len1-1]-q[0])!=1)
		{
			p +=q;
		}
		else
		{
			q +=p;
			p=q;
		}
		//cout << p << "  " << s << endl;
		if(p==xd)
			reverse(p.begin(),p.end());
		int flag=0;
		for (int i = 0; i < p.length()-1; ++i)
		{
			if(abs((p[i]-48)-(p[i+1]-48))==1)
			{
				cout << "No answer" << endl;
				flag=1;
				break;
			}
		}
		if(flag)
			continue;
		else
			cout << p << endl;


	}
	return 0;
}