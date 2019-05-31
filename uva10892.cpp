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
vector<int>v;
ll mx=0,print=0,ans;
void pathao(ll n)
{
	for (int i = 1;i<=sqrt(n); ++i)
	{
		int xd=i;
		if(n%xd==0)
		{
			//cout << n/xd << endl;
			if(n/xd==xd)
				{
					v.push_back(xd);
					//cout << 3 << endl;
				}
			else
			{
				v.push_back(xd);
				v.push_back(n/xd);
			}
		}
	}

}
int main()
{
	sieve();
	long long n;
	while(cin >> n && n)
	{
		//pathao(n);
		if(n==1)
		{
			cout <<1 << " " << 1 << endl;
			continue;
		}
		pathao(n);
		sort(v.begin(),v.end());
		int ck=0;
		for(int j=1;j<v.size()-2;j++)
		for (int i = j+1; i < v.size()-1; ++i)
		{
			int m=__gcd(v[j],v[i]);
			if(m==1)
			{
				ck++;
			}

		}
		cout << n << " " << v.size()+ck << endl;
		v.clear();
	}
}