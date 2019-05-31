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

bool isprime[100005];
vector<int>prime;
int mx=100005;
void sieve()
{
	prime.push_back(2);
	for (int i = 3; i <= sqrt(mx); i +=2)
	{
		if(isprime[i]==0)
		{
			for (int j = i*i; j < mx; j +=i)
			{
				isprime[j]=1;
			}
		}
	}
	for (int i = 3; i < mx;  i +=2)
	{
		if(isprime[i]==0)
			prime.push_back(i);
	}
}
vector<int>paisi;
map<int,int>kutta,no;
void fctr(int n)
{
	for (int i = 0; prime[i] <= sqrt(n); ++i)
	{
		int lol=prime[i];
		if(n%lol==0)
		{
			int ck=0;
			while(n%lol==0) n /=lol,ck++;
			kutta[lol]=ck;
		}
	}
	if(n !=1)
		kutta[n]=1;

}
void fctr1(int n)
{
	for (int i = 0; prime[i] <= sqrt(n); ++i)
	{
		int lol=prime[i];
		if(n%lol==0)
		{
			int ck=0;
			while(n%lol==0) n /=lol,ck++;
			no[lol]=ck;
			paisi.push_back(lol);
		}
	}
	if(n !=1)
		{
			paisi.push_back(n);
			no[n]=1;
		}
}
int main()
{
	int t;
	sieve();
	cin  >> t;
	while(t--)
	{
		int a,b;
		cin >> a >> b;
		if(a==1)
		{
			cout << b << endl;
			continue;
		}
		if(b%a)
		{
			cout << "NO SOLUTION" << endl;
		}
		else
		{
			fctr(a);
			fctr1(b);
			long long ans=1;
			for (int i = 0; i < paisi.size(); ++i)
			{
				//cout << kutta[paisi[i]] << " " << no[paisi[i]] << endl;
				if(kutta[paisi[i]]==0 || kutta[paisi[i]] < no[paisi[i]])
				{
					ans *=(int)(pow(paisi[i],no[paisi[i]]));
				}
				
			}
			kutta.clear();
			paisi.clear();
			no.clear();
			cout << ans << endl;

		}
	}
	return 0;
}