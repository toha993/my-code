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
	int n;
	cin >> n;
	string s[1005];
	vector<string>v[1006];
	map<char,int>mp;
	for(int i=0;i<n;i++)
	{
		cin >> s[i];
		int len=s[i].length();
		v[len].push_back(s[i]);
	}
	int ck=1;
	for (int i = 6; i >= 0; --i)
	{
		if(v[i].size()==0)
		{
			continue;
		}
		else
		{
			for (int j=0; j < v[i].size();j++)
			{
				string pk=v[i][j];
				if(mp[pk[0]]==0)
					mp[pk[0]]=ck++;
				//cout << pk[0] << endl;
			}
		}
	}

	//int p=ck;
	map<char,int>mg;
	int taken=0;
	for (int i = 0; i < n; ++i)
	{
			for (int j=1;j<s[i].size();j++)
			{
				if(mp[s[i][j]]==0)
				{
					if(!taken)
					{
						cout << s[i][j] << endl;
						taken=1;
						mg[s[i][j]]=1;
					}
					else if(mg[s[i][j]]==0)
					{
						//cout << s[i][j] << endl;
						mp[s[i][j]]=ck++;
					}
				}
				//break;
			}
	}
	long long ans=0,ttl=0;
	string bala[1005];
	for (int i = 0; i <n; ++i)
	{
		// string xd;
		// int p=0;
		ans=0;
		for (int j = 0; j <s[i].size(); ++j)
		{
			cout << mp[s[i][j]]; 
			ans = (ans*10)+mp[s[i][j]];
		}
		ttl +=ans;
		 cout << endl;
		// cout << xd << endl;
		//bala[i]=xd;
	}
	//cout << ttl << endl;

}