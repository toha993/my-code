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
//int64_t new
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int main()
{
	int t;
	cin >>t;
	long long a[100005];
	long long ans=0;
	//vector<pair<int,int>>p,a;
	for (int i = 0; i < t; ++i)
	{
		long long x,y;
		cin >> x >> y;
		a[i]=x-y;
		ans +=(y*t-x);
	}
	sort(a,a+t,greater<long long>());
	//long long ans=0;
	for (int i = 0; i < t; ++i)
	{
		ans += a[i]*(i+1);
	}
	cout << ans << endl;











}