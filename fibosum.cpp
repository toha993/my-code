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

int mod=1000000007;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void multiply(ll f[2][2],ll m[2][2]);
void power(ll f[2][2],int p);
ll fib(ll n)
{
	ll f[2][2]={{1,1},{1,0}};
	if(n==0)
		return 0;
	power(f,n-1);
	return f[0][0];
}
void power(ll f[2][2],int p)
{
	if(p==0 || p==1)
	{
		return;
	}
	ll multi[2][2]={{1,1},{1,0}};
	power(f,p/2);
	multiply(f,f);

	if(p%2==1)
	{
		multiply(f,multi);
	}
}
void multiply(ll f[2][2],ll m[2][2])
{
	int x=(f[0][0]*m[0][0]+f[0][1]*m[1][0])%mod;
	int y=(f[0][0]*m[0][1]+f[0][1]*m[1][1])%mod;
	int z=(f[1][0]*m[0][0]+f[1][1]*m[1][0])%mod;
	int w=(f[1][0]*m[0][1]+f[1][1]*m[1][1])%mod;

	f[0][0]=x;
	f[0][1]=y;
	f[1][0]=z;
	f[1][1]=w;

}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int p,q;
		cin >> p >> q;
		if(p>q){
            printf("Error!!");
        }
		ll result=(fib(q+2)-fib(p+1))%mod;
		if(result<0)
			result +=mod;
		result %=mod;
		cout << result << endl;


	}

}