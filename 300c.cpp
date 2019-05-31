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
#define mod 1000000007
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
ll fact[1000005];
ll a,b,n,ans=0;
//ll mod=1e9+7;
ll fermat(ll xd,ll power)
{
	if(power==0)
		return 1;
	ll gg=fermat(xd,(power/2))%mod;
	 gg=(gg*gg)%mod;
	if(power%2)
	{
		return (gg*xd)%mod;
	}
	else
		return gg;

}
bool chck(ll number)
{
	while(number>0)
	{
		if(number%10 !=a && number%10 !=b)
			return 0;
		number /=10;
	}
	return 1;
}
void fct()
{
	fact[0]=1;
	for (int i = 1; i <= 1000002; ++i)
	{
		fact[i]= (i*fact[i-1])%mod;
		//cout << fact[i] << endl;
	}
}
ll khela(ll p,ll q)
{
	ll up=fact[p];
	//cout << up << endl;
	ll niche=(fact[p-q]*fact[q])%mod;
	//cout << niche << endl;
	return (up*fermat(niche,mod-2))%mod;
}
int main()
{
	//ll a,b,n;
	cin >> a >> b >> n;
	//cout << a << b << n;
	//ll ans=0;
	fct();
	for (int i = 0; i <= n; ++i)
	{
		if(chck(a*i+(n-i)*b))
		{
			//cout << n-i <<  " " << i << endl; 
			ans +=khela(n,i);
			//cout << khela(n,i) << endl;
			ans = ans%mod;
		}
	}
	cout << ans << endl;
}