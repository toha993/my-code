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
int a[200005];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];

	}
	int p,q;
	cin >> p >> q;
	long long ans=0,ttl=0;
	for (int i = 0; i < n; ++i)
	{
		if(a[i]>p)
		{
			
			ttl=a[i]/(p+q);
			a[i] -=ttl*(p+q);
			if(a[i]>p)
				ttl +=1;
			ans +=ttl*q;





		}
	}
	cout << ans << endl;
}