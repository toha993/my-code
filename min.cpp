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
	vector<string>v;
	map<char,int>mp,mg;
	int ck=1;
	for(int i=0;i<n;i++)
	{
		cin >> s[i];
		int len=s[i].length();
		//cout << s[i][0] <<  endl;
		//mp[s[i][0]]=ck++;
		if(len<6)
		{
			int m=6-len;
			string mg;
			while(m--)
			{
				mg +=" ";
			}
			s[i]=mg+s[i];
		}
		//cout << s[i] << endl;
		v.push_back(s[i]);
	}
	sort(v.rbegin(),v.rend());
	int taken=0;
	for (int i = 0; i < v.size(); ++i)
	{
		string gg=v[i];
		cout << gg << endl;
		for (int j = 0; j <gg.size() ; ++j)
		{
			char c=gg[j];
			char xd= ' ';
			if(c !=xd)
			{
				if(mp[c] !=0)
					break;
				//cout << c << endl;
				mp[c]=ck++;
				cout << c << " " << mp[c] <<  endl;
				break;

			}
		}
	}



	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0;;)
		{
			char c=v[i][j];
			char xd= ' ';
			if(mp[v[i][j]]==0 && c !=xd)
			{
			//	cout << v[i][j] << endl; 
				mp[v[i][j]]=ck++;
			}
			break;
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 1;;)
		{
			char c=v[i][j];
			char xd= ' ';
			if(mp[v[i][j]]==0 && c !=xd)
			{
				if(v[i][j-1] !=xd && !taken)
				{
					mg[v[i][j]]=1;
					taken=1;
				}
				else			
					mp[v[i][j]]=ck++;
			}
			break;
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 2;;)
		{
			char c=v[i][j];
			char xd= ' ';
			if(mp[v[i][j]]==0 && c !=xd)
			{
				if(v[i][j-1] !=xd && !taken)
				{
					mg[v[i][j]]=1;
					taken=1;
				}
				else			
					mp[v[i][j]]=ck++;
			}
			break;
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 3;;)
		{
			char c=v[i][j];
			char xd= ' ';
			if(mp[v[i][j]]==0 && c !=xd)
			{
				if(v[i][j-1] !=xd && !taken)
				{
					mg[v[i][j]]=1;
					taken=1;
				}
				else			
					mp[v[i][j]]=ck++;
			}
			break;
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 4;;)
		{
			char c=v[i][j];
			char xd= ' ';
			if(mp[v[i][j]]==0 && c !=xd)
			{
				if(v[i][j-1] !=xd && !taken)
				{
					mg[v[i][j]]=1;
					taken=1;
				}
				else			
					mp[v[i][j]]=ck++;
			}
			break;
		}
	}
	for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 5;;)
		{
			char c=v[i][j];
			char xd= ' ';
			if(mp[v[i][j]]==0 && c !=xd)
			{
				if(v[i][j-1] !=xd && !taken)
				{
					mg[v[i][j]]=1;
					taken=1;
				}
				else			
					mp[v[i][j]]=ck++;
			}
			break;
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