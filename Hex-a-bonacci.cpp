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
int mod=10000007;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
ll a[10],ans[100005];
int main() {
    ll n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
    	int t=6;
    	ll ttl=0;
    	int i=0;
       	while(t--)
       	{
       		cin >> a[i];
       		ans[i]=a[i];
       		ttl +=a[i];
       		i++;
       	}
       	cin >>n;
       	ans[6]=ttl;
        for (int i = 7; i <= n; ++i)
        {
        	ans[i] =((2*ans[i-1])-(ans[i-7])+mod)%mod;
        	
        }
        printf("Case %lld: %lld\n", ++caseno, ans[n]%mod);
    }
    return 0;
}