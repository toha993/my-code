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

int a[35],b[15];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	sort(a,a+n);
	for (int i = 0; i < 10; ++i)
	{
		cin >> b[i];	
	}
	sort(b,b+10);
	int ck;
	if(b[0]<=a[0])
	{
		cout << 10 << endl;
	}
	else
	{
		cout << a[0] << endl;
	}
}