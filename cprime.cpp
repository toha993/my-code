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
int mx=100000001;
vector<int>prime;
bool isprime[100000001];
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

int main()
{
	sieve();
	int n;
	while(cin >> n && n)
	{
		int x=upper_bound(prime.begin(),prime.end(),n)-prime.begin();
		//x++;
		double pk=log(n);
		double xd=n/pk;
		printf("%.1lf\n",(abs(x-xd)/x)*100);
	}
}