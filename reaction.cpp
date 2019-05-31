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

int a[11][11];
int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		int p,q;
		int mara=0;
		cin >> p >> q;
		for (int i = 0; i < p; ++i)
		{
			for (int j = 0; j < q; ++j)
			{
				cin >> a[i][j];
				if(a[i][j]==4)
				{
					mara=1;
				}
			}
		}
		if(a[0][0]>=2 || a[0][q-1]>=2 || a[p-1][0] >=2 || a[p-1][q-1]>=2)
			mara=1;
		for (int i = 1; i < q-1; ++i)
		{
			if(a[0][i]>=3 ||a[p-1][i] >=3 )
			{
				mara=1;
				break;
			}
		}
		for (int i = 1; i < p-1; ++i)
		{
			if(a[i][0]>=3 ||a[i][q-1] >=3 )
			{
				mara=1;
				break;
			}
		}
		if(mara)
			cout << "Unstable" << endl;
		else
			cout << "Stable" << endl;
	}
}