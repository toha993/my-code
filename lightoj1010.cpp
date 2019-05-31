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
	int t;
	cin >> t;
	int ck=1;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		if(n==1 || m==1)
			cout <<"Case " << ck++ << ": "  << max(m,n) << endl;
		else if(n==2 || m==2)
		{
			int mx=max(n,m);
			if(mx%4==1)
			{
				cout <<"Case " << ck++ << ": "  << ((mx/4)*4)+2<< endl;
			}
			else if(mx%4 !=0)
			{
				cout <<"Case " << ck++ << ": "  << ((mx/4)*4) +4 << endl;

			}
			else
				cout <<"Case " << ck++ << ": "  << ((mx/4)*4) << endl;
			
		}
		else if(n >2 && m >2)
		cout <<"Case " << ck++ << ": "  << ((n*m)+1)/2 << endl;
	}
}