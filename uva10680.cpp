#include<bits/stdc++.h>
#define ll long long
using namespace std;
//solution
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
vector<ll>prime;
int maxx=1000005;
bool isprime[1000005];
void sieve()
{
	for (int i = 3; i <=1000 ; i +=2)
	{
		if(isprime[i]==false)
		{
			for (int j = i*i; j <=maxx; j+=2*i)
			{
				isprime[j]=true;
			}
		}
	}
	prime.push_back(2);
	for (int i = 3; i <= maxx; i +=2)
	{
		if(isprime[i]==false)
			prime.push_back(i);
	}
	// for (int i = 0; i < prime.size(); ++i)
	// {
	// 	cout << prime[i] << endl;
	// }
}
ll res=1;
ll cnt2=0,cnt5=0;
int n;
void factor()
{
	res=1;
	cnt2=0,cnt5=0;
	for(int i=0;prime[i] <=n;i++)
	{
		ll tmp=1;
		//res=1;
		if(prime[i]==2)
		{
			while(tmp*2<=n)
			{
				cnt2 +=1;
				tmp *=2;
			}
		}
		else if(prime[i]==5)
		{
			while(tmp*5 <=n)
			{
				cnt5 +=1;
				tmp *=5;
			}
		}
		else
		{
			while(tmp*prime[i]<=n)
			{
				tmp *=prime[i];
				res *=prime[i];
				res %=10;
			}
		}
	}
}
int main()
{
	sieve();
	//ll n;
	while(cin >> n && n)
	{
		factor();
		for (int i = 1; i<= cnt2 - cnt5 ; ++i)
		{
			res *=2;
			res %=10;
		}
		printf("%lld\n",res);
	}
}