#include<bits/stdc++.h>
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
int mx=1000001;
vector<int>prime;
bool isprime[1000001];
int digsum(int n);
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void sieve()
{
	prime.push_back(2);
	for (int i = 3; i <= sqrt(mx); i +=2)
	{
		if(isprime[i]==0)
		for (int j = i*i; j < mx; j +=i)
		{
			isprime[j]=1;
		}
	}
	for (int i = 3; i < mx; i +=2)
	{
		if(!isprime[i])
			prime.push_back(i);
	}
}
int fctr(int n)
{
	int ashse=n;
	int ans=0;
	for (int i = 0; prime[i] <=sqrt(n) && n>1; ++i)
	{
		//int xd=digsum(prime[i]);
	//		
		if(n%prime[i]==0)
		{
			int xd=digsum(prime[i]);
			//cout << prime[i] << " " << xd << " " << endl;
			int ck=0;
			while(n%prime[i]==0)
			{
				n /=prime[i];
				ck++;
			}
			ans +=(ck*xd);
		}
	}
	if(n==ashse)
	{
		return 0;
	}
	if(n !=1)
	{
		ans += digsum(n);
	}
	return ans;


}
int digsum(int n)
{
	int paisi=0;
	while(n!=0)
	{
		paisi +=n%10;
		n /=10;
	}
	return paisi;
}
int main()
{
	int t;
	cin >> t;
	sieve();
	while(t--)
	{
		int x;
		cin >> x;
		int mila=digsum(++x);
		int paba=fctr(x);
		while(paba != mila)
		{
			x++;
			paba=fctr(x);
			mila=digsum(x);
		}
		//cout << digsum(x) << " " << fctr(x) << endl;
		cout << x << endl;
	}
}