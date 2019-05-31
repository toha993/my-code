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
int mx=100005;
bool isprime[100005];
vector<int>prime;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void sieve()
{
	prime.push_back(2);
	for (int i = 3; i < sqrt(mx); i +=2)
	{
		if(isprime[i]==0)
		for (int j = i*i; j < mx; j +=i)
		{
			isprime[j]=1;
		}
	}
	for (int i = 3; i < mx; ++i)
	{
		if(isprime[i]==0)
			prime.push_back(i);
	}
}

long long xd(int n)
{
	long long ck=0,num=prime[ck],ans=n;
	while(num*num <= ans)
	{
		if(n%num==0) ans -=ans/num;
		while(n%num==0) n /=num;
		num=prime[++ck];
	}
	if(n != 1)
		ans -=ans/n;
	return ans;
}
int main()
{
	int n;
	sieve();
	while(cin >> n)
	{
		while(n--)
		{
			int xdxd;
			cin >> xdxd;
			int p=xd(xdxd);
			cout << p << endl;

		}

	}

}