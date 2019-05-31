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

char bla[2005][2005];
int a[2005];
int main()
{
	int n,m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> bla[i][j];
			if(bla[i][j]== '1')
				{
					a[j] +=1;
				}
		}
	}
	int ans=0;
	for (int i = 0; i < n; ++i)
	{
		int j;
		for (j = 0; j < m; ++j)
		{
			if(bla[i][j]== '1')
			{
				if(a[j]-1==0)
					break;
			}
		}
		//cout << j << endl;
		if(j==m)
		{
			ans=1;
			break;
		}
	}
	if(ans)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}