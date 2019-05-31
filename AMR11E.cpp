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
bool isprime[100005]={0};
vector<int>prime;
int mx=100005;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
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
		if(!isprime[i])
			prime.push_back(i);
	}
	// for (int i = 0; i < prime.size(); ++i)
	// {
	// 	cout << prime[i] << endl;
	// }
}
vector<int>paisi;
void pre(int q)
{
	int m=q;
	int ck=0;
	for (int i = 0; prime[i]<=(q); ++i)
	{
		if(q%prime[i]==0)
		{
			while(q%prime[i]==0)
				q /=prime[i];
			ck++;
		}
	}
	if(q !=1)
		ck++;
	if(ck>=3)
		paisi.push_back(m);
}
int main()
{
	int n;
	sieve();
	for (int i = 0; i <10000; ++i)
	{
		pre(i);
	}
	cin >> n;
	//cout << paisi.size() << endl;
	while(n--)
	{
		int p;
		cin >> p;
		cout << paisi[p-1] << endl;
	}

}