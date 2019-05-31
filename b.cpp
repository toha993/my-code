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
//parinai
int a[505][505];
int main()
{
	bool numb[1038];
	memset(numb,0,sizeof(numb));
	int n,m;
	cin >> n >> m;
	vector<int>v[505];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
		}
	}
	int ans=0;
	for (int i = 0; i < n; ++i)
	{
		ans ^=a[i][0];
	}
	if(ans>0)
	{
		cout << "TAK" << endl;
		for (int i = 0; i < n; ++i)
		{
			cout << 1 << " ";
		}
		cout << endl;
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(a[i][0]!=a[i][j])
			{
				cout << "TAK" << endl;
				for (int k = 0; k < n; ++k)
				{
					if(k !=i)
						cout << 1 << " ";
					else
						cout << j+1 << " ";
				}
				cout << endl;
				return 0;
			}
		}
	}
	cout << "NIE" << endl;

}