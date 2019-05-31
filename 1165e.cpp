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
ll mod=998244353;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

ll a[200005],b[200005];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		a[i] =a[i]*(i)*(n-i+1);
	}
	for (int i = 1; i <=n; ++i)
	{
		cin >> b[i];
	}
	sort(a+1,a+n+1);
	ll ans=0;
	sort(b+1,b+n+1,greater<ll>());
	for (int i = 1; i <= n; ++i)
	{
		ans =(ans+(a[i]%mod)*(b[i]%mod)%mod)%mod;
		ans %=mod;
	}
	cout << ans << endl;

}