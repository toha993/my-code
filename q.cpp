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
	int n,k;
	cin >> n >> k;
	string s,p[200005];
	cin >> s;
	map<char,int>mp;
	if(n==1)
	{
		if(k==1)
		{	
			cout << 1 << endl;
			exit(0);
		}
		else
		{
			cout << 0 << endl;
			exit(0);
		}
	}
	int we=0;
	if(k==1)
	{
		for (int i = 0; i < n; ++i)
		{
			mp[s[i]]++;
		}
		for (int i =97; i <97+26; ++i)
		{
			we=max(we,mp[i]);
		}
		cout << we << endl;
		return 0;
	}
	int len=s.length();
	int flag=0,paisi=0,xd=0;
	
	for (int i = 0; i <(len-k)+1;)
	{
		int ck=1;
		flag=0;
		for (int j = i+1; j < len; ++j)
		{
			if(s[j]==s[i])
				ck++;
			else
				{
					i=j;
					break;
				}
			if(ck==k)
			{
				flag=1;
				paisi=1;
				p[xd++]=s.substr(i,k);
				//mp[s.substr(i,k)]=1;
				//mp[p[xd-1]]=1;
				i=j;
				break;
			}
			
		}
	}
	set<string>st;
	for (int i = 0; i < xd; ++i)
	{
		st.insert(p[i]);
	}
	if(paisi==0)
	{
		cout << 0 << endl;
	}
	else
	{
		int cp=0,ans=0;
		for (auto i : st)
		{
			string as= i;
			int cp=0;	
			for (int i = 0; i < len;)
			{
				if(s.substr(i,k)==as)
					{
						cp++;
						i +=k;
					}
				else
					i++;
			}
			ans=max(cp,ans);
		}
		cout << ans << endl;
	}
}