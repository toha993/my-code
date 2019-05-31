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

int a[200005];
map<int,long long>mp;
int main()
{
	long long n,mn=1000000007,mx=0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		mp[a[i]]++;
		if(a[i]<mn)
			mn=a[i];
		if(a[i]>mx)
			mx=a[i];
	}
	if(mx-mn !=0)
		cout << mx-mn << " " << mp[mx]*mp[mn] << endl;
	else
		cout << 0 << " " << n*(n-1)/2 << endl;




}