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
long long arr[6],barr[6];
int main()
{
	int a,b;
	cin >> a >> b;
	long long ans=0;
	for (int i = 1; i <= a; ++i)
	{
		arr[i%5]++;
	}
	for (int i = 1; i <= b; ++i)
	{
		barr[i%5]++;
	}
	for (int i = 0; i < 5; ++i)
	{
		ans += arr[i]*barr[(5-i)%5];
	}

	cout << ans << endl;
}