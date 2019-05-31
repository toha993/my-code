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
bool isvisited[100005];
int mx=100005;
void sieve()
{
	prime.push_back(2);
	for (int i = 3; i <= sqrt(mx); i +=2)
	{
		if(isvisited[i]==0)
			for (int j = i*i; j < mx; j +=i)
			{
				isvisited[j]=1;
			}
	}
	for (int i = 3; i < mx ; i +=2)
	{
		if(isvisited[i]==0)
			prime.push_back(i);
	}
	// for (int i = 0; i < prime.size(); ++i)
	// {
	// 	cout << prime[i] << endl;
	// }
}
ll phi(int n)
{
	int ck=0;
	ll xd=prime[ck];
	ll ans=n;
	while(xd*xd<=n)
	{
		if(ans%xd==0) ans -= ans/xd;
		while(n%xd==0) n/=xd;
		xd=prime[++ck];
	}
	if(n !=1)
		ans -=ans/n;
	return ans;
}
// ll numdiv(int n)
// {
// 	ll ans=1;
// 	for (int i = 0; prime[i] <= sqrt(n); ++i)
// 	{
// 		int lol=prime[i];
// 		if(n%lol==0)
// 		{
// 			int ck=0;
// 			while(n%lol==0) ck++,n /=lol;
// 			ans *=(ck+1);
// 		}
// 	}
// 	if(n !=1)
// 		ans *=2;
// 	return ans;
// }

int main()
{
	sieve();
	int n;
	while(cin >> n && n)
	{
		if(n==1)
			{
				cout << 0 << endl;
				continue;
			}
		ll xd;
		xd=phi(n);
		//cout << xc << endl;
		cout << xd << endl;
	}

}