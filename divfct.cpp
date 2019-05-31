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
int mx=100005;
vector<int>prime;
bool isprime[100005];
void sieve()
{
	prime.push_back(2);
	for (int i = 3; i < sqrt(mx); i +=2)
	{
		if(isprime[i]==false)
		{
			for (int j = i*i; j < mx; j +=i)
			{
				isprime[j]=true;
			}
		}
		
	}
	for (int i = 3; i < mx; i +=2)
	{
		if(isprime[i]==false)
			prime.push_back(i);
	}
	// for (int i = 0; i < prime.size(); ++i)
	// {
	// 	cout << prime[i] << endl;
	// }
}
long long ans[30005];
int ber(int p)
{
	long long ck=0,rslt=1;
	//int sd=q;
	for (int i = 0;prime[i]<=p; ++i)
			{
				ck=0;
				ll u=prime[i];
				while(u <=p)
				{
					ck +=(p/u);
					u *=prime[i];
				}
				rslt =((rslt%mod)*((ck+1)%mod))%mod;
			}
			return rslt%mod;
}

int main()
{
	int n;
	sieve();
	cin >> n;
	while(n--)
		{	int p;
			cin >> p;
			ll ans=ber(p);
			cout << ans << endl;
		}

}