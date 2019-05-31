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

int a[105];
int main()
{
	int n;
	cin >> n;
	int first,last;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		if(a[i]==1)
			first=i;
		if(a[i]==n)
			last=i;
	}
	if(abs(first-last)==n-1)
	{
		cout << n-1 << endl;
		return 0;
	}
	//cout << first << " " << last << endl;
	int mx=0;
	mx=max(mx,abs(n-last));
	mx=max(mx,abs(n-first));
	mx=max(mx,abs(first-1));
	mx=max(mx,abs(last-1));
	cout << mx << endl;




}