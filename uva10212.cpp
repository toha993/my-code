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
int mod=1000000000;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	int n,p;
	while(cin >> n >> p)
	{
		long long ans=1;
		if(p==0)
		{
			cout << 1 << endl;
			continue;
		}
		for (int i = n; i >n-p; i--)
		{
			ans *=i;
			while(ans%10==0)
				ans /=10;
			ans %=mod;
		}
		cout << ans%10 << endl;
	}
}