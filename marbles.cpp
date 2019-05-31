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

ll hbe(ll a,ll b)
{
	ll x=1;
	if(b>a/2)
		b=a-b;
	for (int i = 0; i < b; ++i)
	{
		x*=a--;
		x /=(i+1);
	}
	return x;





}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll p,q;
		cin >> p >> q;
		ll ans=hbe(p-1,q-1);
		cout << ans << endl;
	}

}