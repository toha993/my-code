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
	long long n;
	while(cin >> n && n)
	{
		if(n==1)
		{
			cout << 1 << endl;
			continue;
		}
		double ans=log2(n);
		//cout << ans << endl;
		if(ans-(long long)ans>0.0)
		{
			//cout << (long long)ans << endl;
			cout << (n-pow(2,(long long)ans))*2 << endl;
		}
		else
			cout << n << endl;

	}
}