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

//int a[105];
int main()
{
	int n,p;
	cin >> n >> p;
	if(p>8 && n==1 || ((p/8)>n))
	{
		cout << -1 << endl;
		return 0;
	}
	int ans=0,ase=0;
	int x;
	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		ase +=x;
		p -=min(8,ase);
		ase -=min(8,ase);
		if(p<=0)
		{
			ans=i+1;
			break;
		}
	}
	if(p>=1)
	{
		cout << -1 << endl;
		return 0;
	}
	cout << ans << endl;

}