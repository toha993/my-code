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
#define int long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


main()
{
	int m;
	cin >> m;
	while(m--)
	{
		int n;
		cin >> n;
		int baki=n;
		if(n<=0)
		{
			cout << 0 << endl;
			continue;
		}
		int ans=0;
		for (int i = 1;;)
		{
			int xd=n/i;
			int xc=n/(i+1);
			ans +=i*(xd-xc);
			baki -=(xd-xc);
			if(baki<=0)
				break;
			i=n/baki;

		}
		cout << ans << endl;

	}

}