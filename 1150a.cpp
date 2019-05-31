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
	int a,b,c;
	cin >> a >> b >>c;
	int mn=1000000000;
	while(a--)
	{
		int p;
		cin >> p;
		mn=min(mn,p);
	}
	int mx=0;
	while(b--)
	{
		int x;
		cin >> x;
		mx=max(x,mx);
	}
	if(mx<=mn)
	{
		cout << c << endl;
	}
	else
	{
		int as=c/mn;

		as *=mx;
		cout << c%mn+as << endl;
	}
}