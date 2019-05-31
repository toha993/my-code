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
int mx=100005;
vector<int>prime;
int isprime[100005];
void sieve()
{
	memset(isprime,0,sizeof(isprime));
	prime.push_back(2);
	for(int i=3;i<=sqrt(mx);i +=2)
	{
		if(isprime[i]==0)
		{
			for (int j = 2*i; j < mx; j +=i)
			{
				isprime[j]=1;
			}
		}
	}
	for (int i = 3; i < mx; i +=2)
	{
		if(isprime[i]==0)
			prime.push_back(i);
	}
}
int cp=0;
void fctr(int n)
{
	int ck=0,bal=n;
	for(int i=0;prime[i]<=n;i++)
	{
		int l=prime[i];
		if(n%l==0)
		{
			while(n%l==0)
				n /=l;
			ck++;
		}
	}
	if(n !=1)
		ck++;
	if(ck==2)
		{
			//cout << bal << endl;
			cp++;
		}
}
int main()
{
	sieve();
	int q;
	cin >> q;
	for (int i = 6; i <= q; ++i)
	{
		fctr(i);
	}
	cout << cp << endl;

}