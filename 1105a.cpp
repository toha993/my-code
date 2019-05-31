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


int main()
{
	int n;
	cin >>n;
	vector<int> v;
	for (int i = 1; i <= n; ++i)
	{
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int mid=v[n/2]-1;
	int ans=0;
	cout << mid << endl;
	for (int i = 0; i <n/2; ++i)
	{
		if(v[i]<mid-1)
		ans +=(mid-1-v[i]);
	}
	cout << ans << endl;
	for (int i = (n)/2; i <n ; ++i)
	{
		if(v[i]>mid+1)
		ans +=(v[i]-mid)-1;
	}
	cout << ans << endl;



}