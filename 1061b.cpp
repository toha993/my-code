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
//#define int long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

long long a[100005];
int main()
{
	long long n,m;
	cin >> n >> m;
	long long ttl=0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		ttl+=a[i];
	}
	sort(a,a+n);
	//mx=a[n-1]
	long long ck=0,cnt=1;
	for (int i = 1; i < n; ++i)
	{
		if(a[i]>cnt)
		{
			cnt++;
		}
	}
	ttl -=(n+a[n-1]-cnt);
	cout << ttl << endl;


	//cout << min(ck,ttl-n) << endl;
}