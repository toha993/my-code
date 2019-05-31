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
ll a[1000005];
vector<ll>v;
void sieve()
{
	for(ll i=2;i*i*i <=1000005;i++)
	{
		ll q=i*i*i;
		a[q]=1;
		//gg.push_back(q);
		for (int j = 2*q; j <=1000005; j +=q)
		{
			a[j]=1;
		}
	}
	//prime.clear();
	for (int i = 1; i <=1000005; ++i)
	{
		if(a[i]==1)
			v.push_back(i);
	}
}

int main()
{
	sieve();
	int n;
	cin >> n;
	int ck=0;
	while(n--)
	{
		int x;
		cin >> x;
		cout << "Case " << ++ck << ": "; 
		if(a[x]==1)
		{
			cout << "Not Cube Free" << endl;
		}
		else 
		{ 
			int cp=upper_bound(v.begin(),v.end(),x)-v.begin();
			cout << x-cp << endl;
		}
	}
}