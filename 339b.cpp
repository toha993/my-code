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
	int p,q;
	cin >> p >> q;
	int  a[q];
	long long ck=1;
	cin >> a[0];
	ck=a[0]-ck;
	for (int i = 1; i <= q-1; ++i)
		{
			cin >> a[i];
			if(a[i]<a[i-1])
				ck +=(p-a[i-1])+a[i];
			else if(a[i]>a[i-1])
				ck +=a[i]-a[i-1];
			//cout << ck << endl;
		}
	cout << ck << endl;
}