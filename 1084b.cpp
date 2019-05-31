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

int jar[5000];
int main()
{
	long long sum=0,n,s,mn=100000000000000,ans=0;
	cin >> n >> s;
	for (int i = 0; i < n; ++i)
	{
		cin >> jar[i];
		sum +=jar[i];
		if(jar[i]<mn)
			mn=jar[i];
	}
	//cout << 
	if(sum<s)
	{
		cout << -1 << endl;
		return 0;
	}
	if(sum==s)
	{
		cout << 0 << endl;
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		ans +=(jar[i]-mn);
	}
	if(ans < s)
	{
		long long xd=s-ans;
		long long mapa=ceil((double)xd/(double)n);
		mn -=mapa;
	}
	cout << mn << endl;
}