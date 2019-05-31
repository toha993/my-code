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
void sieve()
{
	bool isprime[100005];
	memset(isprime,0,sizeof(isprime));
	for(int i=4;i<=100000;i +=2)
		isprime[i]=1;
	for (int i = 3; i <=sqrt(100000) ; i +=2)
	{
		if(isprime[i]==0)
		{
			for (int j = 2*i; j <=100000; j+=i)
			{
				isprime[j]=1;
			}
		}
	}
	for (int i = 2; i <= 100000; ++i)
	{
		if(isprime[i]==0)
			prime.push_back(i);
	}
}
vector<pair<int,int>>fctr;
void factor(ll p)
{
	for(int i=0;prime[i]<=sqrt(p);i++)
	{
		int ck=0;
		if(p%prime[i]==0)
		{
			while(p%prime[i]==0)
			{
				ck++;
				p /=prime[i];
			}
			fctr.push_back({prime[i],ck});
		}
	}
	if(p!=1)
		fctr.push_back({p,1});
}
bool chk(ll x,ll y)
{
	int cp=0;
	if(fctr.size()==0 && x < y)
		return 0;
	else if(fctr.size()==0 && x>=y)
		return 1;
	for(int i=fctr[cp].first;cp < fctr.size();i=fctr[cp].first)
	{
		int cd=0;
		ll tmp=x;
		while(tmp>=i)
		{
			cd +=tmp/i;
			tmp /=i;
		}
		if(cd<fctr[cp].second)
		{
			return 0;
		}
		cp++;
	}
	return 1;
}

int main()
{
	sieve();
	int n,m;
	while(cin >> n >> m)
	{
		factor(m);
		if(n==0)
		{
			if(m==1)
				cout << m << " divides " << n << "!" << endl;
			else
				cout << m << " does not divide " << n << "!" << endl;

			continue;
		}
		if(chk(n,m))
		{
			cout << m << " divides " << n << "!" << endl; 
		}
		else
			cout << m << " does not divide " << n << "!" << endl;
		fctr.clear();
	}
}