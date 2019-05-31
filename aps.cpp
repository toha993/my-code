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
ll a[10000005],b[10000005];
int main()
{
	for(ll i=2;i<=10000000;i++)
	{
		if(a[i]==0)
		{
			a[i]=i;
			for (ll j= i*i; j <= 10000000; j +=i)
			{
				if(a[j]==0) a[j]=i;
			}
		}
		b[i]=b[i-1]+a[i];
	}
	int t;
	cin >> t;
	while(t--)
	{
		int p;
		cin >> p;
		cout << b[p] << endl;
	}




}
