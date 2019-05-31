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

	int p;
	cin >> p;
	for (int i = 1; i <= p; ++i)
	{
		cin >> a[i];
	}
	int l;
	cin >> l;
	long long porbe=0;
	for (int i = 1; i <= l; ++i)
	{
		int m,n;
		cin >> m >> n;
		porbe=max(porbe,a[m]);
		cout << porbe << endl;
		porbe +=n;
	}




}