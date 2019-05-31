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
int mod(ll n,ll m,ll k)
{
	if(m==0)
		return 1;
	ll pk=mod(n,m/2,k);
	if(m%2==0)
	{
		//ll pk=mod(n,m,k);
		return ((pk%k)*(pk%k))%k;
	}
	else
	{
		return ((n%k)*((pk%k)*(pk%k))%k)%k;
	}
}

int main()
{
	ll n,m,k;
	while(cin >> n >> m >> k)
		cout << mod(n,m,k) << endl;
}