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

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int a[200005],m[105];
int main()
{
	int n,k;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		m[a[i]%k]++;
	}
	// for (int i = 0; i < k; ++i)
	// {
	// 	cout << m[i] << endl;
	// }
	long long ans=0;
	ans += (m[0])/2;
	for (int i = 1; i <= k/2; ++i)
	{
		if(i != ceil(k/2.0))
			ans += min(m[i],m[k-i]);
		else
			ans +=(m[i])/2;
	}
	cout << ans*2 << endl;
}