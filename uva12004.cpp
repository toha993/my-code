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
#define ll long long

int main()
{
	int t;
	cin >> t;
	int ck=1;
	while(t--)
	{
		ll n;
		cin >> n;
		cout << "Case " << ck++ << ": ";
		if(n==1)
		{
			cout << 0 << endl;
			continue;
		}
		if(n==2)
		{
			cout << 1 << "/" << 2 << endl;
			continue;
		}
		else
		{
			ll ans=(n*(n-1))/2;
			if(ans&1)
			{
				cout << ans << "/" << 2 << endl;
			}
			else
			{
				cout << ans/2 << endl;
			}
		}
	}
}