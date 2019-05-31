#include<bits/stdc++.h>
#define ll long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	ll n,m;
	cin >> n >> m;
	if(n%m==0)
	{
		cout << 0 << endl;
		return 0;
	}
	else
	{
		ll mayb1=(n/m)*m;
		ll mayb2=((n/m)+1)*m;
		if(mayb1!=0)
			cout << min(mayb2-n,n-mayb1) << endl;
		else
			cout << mayb2-n  << endl;

	}
}