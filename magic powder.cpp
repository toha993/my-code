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


int a[1005],b[1005];
int main()
{
	int n,m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int mn=1e9+8;
	for (int i = 0; i < n; ++i)
	{
		cin >> b[i];
		mn=min(mn,(b[i]/a[i]));
	}
	int flag=1;
	int trgt=mn;
	//cout << trgt << endl;
	while(flag !=0)
	{
		trgt++;
		for (int i = 0; i < n; ++i)
		{
			if(b[i]/a[i]>=trgt)
				continue;
			else
			{
				int lgbe=(trgt*a[i]);
				m -=(lgbe-b[i]);
				b[i]=lgbe;
				
			}
		}
		if(m<0)
				{
					//flag=0;
					trgt--;
					break;
				}
	}
	cout << trgt << endl;

}