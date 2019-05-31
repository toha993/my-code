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

int a[55][55],b[55][55];
int main()
{
	int p,q;
	cin >> p >> q;
	for (int i = 0; i < p; ++i)
	{
		for (int j = 0; j < q; ++j)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < p; ++i)
	{
		for (int j = 0; j < q; ++j)
		{
			cin >> b[i][j];
		}
	}
	
	for (int i = 0; i < p; ++i)
	{
		for (int j = 0; j < q; ++j)
		{
			if(a[i][j]>b[i][j])
				swap(a[i][j],b[i][j]);
		}
	}


	for (int i = 0; i <= p; ++i)
	{
		a[i][q]=b[i][q]=1000000000+1;
		if(i==p)
		for (int j = 0; j <= q; ++j)
		{
			a[i][j]=b[i][j]=1000000000+1;
		}
	}
	// for (int i = 0; i < p; ++i)
	// {
	// 	for (int j = 0; j < q; ++j)
	// 	{
	// 		cout << a[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	// for (int i = 0; i < p; ++i)
	// {
	// 	for (int j = 0; j < q; ++j)
	// 	{
	// 		cout << b[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
	if(p==1 && q==1)
	{
		cout << "Possible" << endl;
		return 0;
	}
	int ans=0;
	if(p==1 && q >1)
	{
		int i=0;
		for (int j = 0;j<q;++j)
		{
			if(a[i][j+1] <= a[i][j] || b[i][j+1] <= b[i][j] )
			{
				ans=1;
				break;
			}
		}

	}
	else if(p>1 && q==1)
	{
		int j=0;
		for (int i = 0;i<p;++i)
		{
			if(a[i+1][j] <= a[i][j] || b[i+1][j] <= b[i][j] )
			{
				ans=1;
				break;
			}
		}
	}
	else
	{
		for (int i = 0; i < p; ++i)
		{
			for (int j = 0; j < q; ++j)
			{
				if(a[i+1][j]<=a[i][j] || a[i][j+1] <= a[i][j] || b[i+1][j]<=b[i][j] || b[i][j+1] <= b[i][j] )
				{
					ans=1;
					break;
				}
			}
		if(ans)
			break;
		}
	}
	if(ans)
	{
		cout << "Impossible" << endl;
	}
	else
		cout << "Possible" << endl;
}