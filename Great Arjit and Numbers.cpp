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
#define mod 1000000007
#define ll long long
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
ll solve(ll n)
{
	n=((n)*(n+1))%mod;
	return n;
}
ll invrse(ll base,ll power)
{
	if(power==0)
		return 1;
	ll q=invrse(base,power/2);
	ll zx=((q%mod)*(q%mod))%mod;
	if(power & 1)
	{
		return (zx*base)%mod;
	}
	else
		return zx;
}
ll a[100005];
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int p;
		long long ans=0;
		cin >> p;
		ll calc=invrse(2,mod-2)%mod;
		for (int i = 0; i < p; ++i)
		{
			cin >> a[i];
		}
		for (int i = p-1; i >=1; i--)
		{
			ll val=invrse(a[i-1],mod-2);
			val *=a[i];
			val %=mod;
			//cout << a[i] << endl;
			ll c=(val*(val+1))%mod;
			c *=calc;
			c %=mod;
			ans +=c;
			ans %=mod;
			//cout << ans << endl;
			
		}
		ans =(ans*(ans+1))%mod;
		ans *=calc;
		ans  %=mod;
		cout << ans << endl;
	}






}
