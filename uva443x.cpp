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
#define ll long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int main()
{
	ll n=2000000000+1;
	ll p=2;
	map<ll,ll>mp;
	vector<ll>v;
	v.push_back(1);
	while(p<=n)
	{
		if(mp[p]==0)
				{
					v.push_back(p);
					mp[p]++;
				}
		p *=2;
	}
	ll x;
	//cout << v[1] << endl;
	for (int i = 0; i < v.size(); ++i)
	{
		x=3*v[i];
		while(x<=n)
		{
			//cout << mp[x] << " " << x  << endl;
			if(!mp[x])
				{
					v.push_back(x);
					mp[x]++;
				}
			x *=3;
		}

	}
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	cout << v[i] << endl;
	// }
	//v.push_back(5);
	for (int i = 0; i < v.size(); ++i)
	{
		x=5*v[i];
		while(x <= n)
		{
			if(mp[x]==0)
				{
					v.push_back(x);
					mp[x]++;
				}
			x *=5;
		}

	}
	//x=7;
	//v.push_back(7);
	for (int i = 0; i < v.size(); ++i)
	{
		x=7*v[i];
		while(x <= n)
		{
			if(mp[x]==0)
				{
					v.push_back(x);
					mp[x]++;
				}
			x *=7;
		}

	}
	sort(v.begin(),v.end());
	// 
	while(cin >> n && n)
		{
			if(n%100>=10 && n%100<=20)
			cout << "The " << n <<"th humble number is "<<v[n-1] << "." << endl;
			else if(n%10==1)
			{
				cout << "The " << n <<"st humble number is "<<v[n-1] << "." <<  endl;
			}
			else if(n%10==2)
			{
				cout << "The " << n <<"nd humble number is "<<v[n-1] <<"." <<endl;
			}
			else if(n%10==3)
			{
				cout << "The " << n <<"rd humble number is "<<v[n-1] << "."<<endl;
			}
			else
				cout << "The " << n <<"th humble number is "<<v[n-1] << "."<< endl;

		}
}