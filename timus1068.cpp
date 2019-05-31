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
#define ll long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	int n;
	ll ans=0;
	cin >> n;
	if(n<0)
	{
		n *=-1;
		ans= (n*(n+1))/2;
		ans--;
		ans *=-1;
		cout << ans << endl;
		return 0;
	}
	else if(n==0)
	{
		cout << 1 << endl;
		return 0;
	}
	ans=(n*(n+1))/2;
	cout << ans << endl;
}