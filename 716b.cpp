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


int main(int argc, char const *argv[])
{
	string s;
	cin >> s;
	map<int,int>mp;
	int ans=0;
	if(s.length()<26)
	{
		cout << -1 << endl;
		exit(0);
	}
	for (int i = 0; i <= s.length()-26; ++i)
	{
		string p=s.substr(i,26);
		sort(p.begin(),p.end());
		//cout << p << endl;
		int hbena=0,ck=0;
		mp.clear();
		for (int j = 0; j < p.length(); ++j)
		{
			if(p[j]=='?')
				{
					ck++;
				}
			else
				{
					mp[p[j]-48]++;
				}

			if(mp[p[j]-48]>1)
			{
				hbena=1;
				break;
			}
		}
		if(hbena)
			continue;
		for(int k=i;k<=i+26;k++)
		{
			if(s[k]=='?')
			for (int j = 65-48; j <=65-49+26; ++j)
				{
					//cout << (char)j+48 << endl;
					if(mp[j]==0)
						{
							s[k]= (char)(j+48);
							mp[j]=1;
							break;
						}
				}
		}
		ans=1;
		//cout << s << endl;
	}
	//cout << ans << endl;
	if(ans)
	{
		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i]=='?')
				s[i]='A';
		}
	}
	if(ans)cout << s << endl,exit(0);
	cout << -1 << endl;
	return 0;
}