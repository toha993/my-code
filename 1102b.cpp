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

int a[5005],ttl[5005],b[5005];
bool given[5005][5005]={0};
int main()
{
	int n,k,cp=0;
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		ttl[a[i]]++;
		if(ttl[a[i]]>k)
			cp=1;
	}
	if(cp)
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	for (int i = 0; i < k; ++i)
	{
		given[a[i]][i+1]=1;
		a[i]=i+1;
	}
	//cout << given[2][1] << endl;
	for (int i = k; i < n; ++i)
	{
		//cout << a[i] << endl;
		for (int j = 1; j <= k; ++j)
		{
			//cout << given[a[i]][j] << endl;
			if(given[a[i]][j]==0)
			{
				given[a[i]][j]=1;
				a[i]=j;
				break;
			}
		}
	}
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;



}