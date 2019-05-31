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

vector<int>v[150005],vt[150005];
vector<pair<int,int>>pi;
int main()
{
	int n;
	cin >> n;
	string s,s1;
	cin >> s >> s1;
	for (int i = 0; i < n; ++i)
	{
		v[s[i]-48].push_back(i+1);
	}
	for (int i = 0; i < n; ++i)
	{
		vt[s1[i]-48].push_back(i+1);
	}
	for (int i = 49; i <= 49+26; ++i)
	{
		for (int j = v[i].size()-1; j >=0; j--)
		{
			if(vt[i].size()>=1)
			{
				int a=vt[i].size()-1;
				pi.push_back(make_pair(v[i][j],vt[i][a]));
				vt[i].pop_back();
				v[i].pop_back();
			}
		}
	}
	//cout << v[15].size() << " " << vt[15].size() << endl;
	if(v[15].size()>0)
	{
		for (int i = 49;i<=49+26; ++i)
		{
			for (int j = 0;vt[i].size() !=0 && v[15].size()!=0; ++j)
			{
				if(v[15].size()>=1)
				{
					int a=vt[i].size()-1;
					int b=v[15].size()-1;
					pi.push_back(make_pair(v[15][b],vt[i][a]));
					v[15].pop_back();
					vt[i].pop_back();
				}

			}
		}
	}
	if(vt[15].size()>0)
	{
		for (int i = 49;i<=49+26; ++i)
		{
			for (int j = 0; v[i].size() !=0 && vt[15].size() !=0 ; ++j)
			{
				if(vt[15].size()>=1)
				{
					int a=v[i].size()-1;
					int b=vt[15].size()-1;
					pi.push_back(make_pair(v[i][a],vt[15][b]));
					vt[15].pop_back();
					v[i].pop_back();
				}
			}
		}
	}
	int mx=0;
	mx=max(vt[15].size(),v[15].size());
	while(mx>0)
	{
		int x=v[15].size()-1;
		int y=vt[15].size()-1;
		pi.push_back(make_pair(v[15][x],vt[15][y]));
		vt[15].pop_back();
		v[15].pop_back();
		mx--;
	}
	cout << pi.size() << endl;
	for (int i = 0; i < pi.size(); ++i)
	{
		cout << pi[i].first << " " << pi[i].second << endl;
	}
}