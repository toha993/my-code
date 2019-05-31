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


vector<int>prime;
int mxi=100005;
void sieve()
{
	bool isprime[100005];
	memset(isprime,0,sizeof(isprime));
	for(int i=4;i<=mxi;i +=2)
		isprime[i]=1;
	for (int i = 3; i <=sqrt(mxi) ; i +=2)
	{
		if(isprime[i]==0)
		{
			for (int j = 2*i; j <=mxi; j+=i)
			{
				isprime[j]=1;
			}
		}
	}
	for (int i = 2; i <= mxi; ++i)
	{
		if(isprime[i]==0)
			prime.push_back(i);
	}
}
ll mx=0,print=0,ans;
void pathao(int n)
{
	ll mama=n;
	//cout << mama << endl;
	 ans=1;
	for (int i = 0; prime[i] <=sqrt(n); ++i)
	{
		int xd=prime[i];
		if(n%xd==0)
		{
			int cnt=0;
			while(n%xd==0)
			{
				cnt++;
				n /=xd;
			}
			ans *=(cnt+1);
		}
	}
	//cout << ans << endl;
	if(n !=1)
	{
		ans *=2;
	}
	//cout << ans << " " << mx << endl;
	if(ans> mx)
	{
		//cout << 111 <<mama << endl; 
		print=mama;
		mx=ans;
	}

}
int main()
{
	int n;
	sieve();
	cin >> n;
	while(n--)
	{
		mx=0;
		int x,y;
		cin >> x >> y;
		for (int i = x; i <= y; ++i)
		{
			pathao(i);
		}
		cout << "Between " << x << " and " << y << ", " << print << " has a maximum of " << mx << " divisors." << endl;

	}
}