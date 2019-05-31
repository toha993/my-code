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
ll ans[1000005];
int mod=1000000007;
int main()
{
	ans[0]=ans[1]=1;
	ll res=1;
	for(int i = 2; i <=1000000+1; ++i)
		{
			res =((res%mod)*(i%mod))%mod;
			ans[i-1]=res;
		}
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << ans[n]-1 << endl;
	}
}