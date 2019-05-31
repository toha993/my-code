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

long long s[100005];
int main()
{
	long long a,b,ans=0;
	cin >> a >> b;
	for (int i = 0; i < a; ++i)
	{
		cin >> s[i];
	}
	for (int i = 0; i < b; ++i)
	{
		int p,q;
		/* code */
		cin >> p >> q;
		p--,q--;
		//cout << s[p] << " " << s[q] << endl;
		ans +=min(s[p],s[q]);
		//cout << ans << endl;
	}
	cout << ans << endl;
}