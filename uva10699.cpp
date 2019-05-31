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
int mx=0,print=0,ans;
void pathao(int n)
{
	int mama=n;
	int cnt=0;
	for (int i = 0; prime[i] <=sqrt(n); ++i)
	{
		int xd=prime[i];
		if(n%xd==0)
		{
			cnt++;
			while(n%xd==0)
			{
				n /=xd;
			}
		}
	}
	if(n !=1)
	{
		cnt++;
	}
	cout << mama << " : " << cnt << endl;

}
int main()
{
	int n;
	sieve();
	while(cin >> n && n)
	{
		pathao(n);
	}
}