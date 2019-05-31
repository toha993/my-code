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
	int prsn,bgt,htl,wk;
	while(cin >> prsn >> bgt >> htl >> wk)
	{
		int ans=1000000007;
		int a[wk];
		int cst;
		int ck=0;
		for (int i = 0; i < htl ; ++i)
		{
			
			cin >> cst;
			int flag=0;
			for (int i = 0; i < wk; ++i)
			{
				cin >> a[i];
				if(a[i]>=prsn)
				{
					flag=1;
					if(cst*prsn>bgt)
						flag=0;
				}
			}
			if(flag)
			{
				ck=1;
				ans=min(ans,prsn*cst);
			}
			
		}
		if(ck)
		{
			cout << ans << endl;
		}
		else
			cout << "stay home" << endl;




	}
}