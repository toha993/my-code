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

long long a[100005];
int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; ++i)
	{
		cin >> a[i];
	}
	cout << t+1 << endl;
	cout << 1 << " " <<  t << " " <<  100000 << endl;
	for (int i = 0; i < t; ++i)
	{
		cout << 2 << " " << i+1 << " " << (a[i]+100000)-i << endl;
	}


}