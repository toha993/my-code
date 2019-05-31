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

//hoi nai eta
int main()
{
	int p;
	cin >> p;
	int a[]={2,3,4,5,6,8,12,30,32,33,34,35,36,38,40,42,43,44,45,46,38,50,52,53,54,55,56,58,60,62,63,64,65,66,68,80,82,83,84,85,86,88};
	for (int i = 0; i < 42; ++i)
	{
		if(p==a[i])
		{
			cout << "YES" << endl;
			return 0;
		}
		if(a[i]>p)
			break;
	}
	cout << "NO" << endl;

}