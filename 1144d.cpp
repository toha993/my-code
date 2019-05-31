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
vector<int>v;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int a[200005],b[200005];

int main()
{
	int n,val,mx=0,p;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		b[a[i]]++;
		if(b[a[i]]>mx)
			{
				mx=b[a[i]];
				val=a[i];
				p=i;
			}
	}
	auto pq=lower_bound(a,a+n,val);
	//cout << *pq << endl;

	cout << n-mx << endl;
	for (int i = p-1; i >= 1; i--)
	{
		if(a[i]<val)
		{
			cout << 1 << " " << i << " " << i+1 << endl; 
		}
		else if(a[i]>val)
		{
			cout << 2 << " " << i << " " << i+1 << endl;
		}
	}
	for (int i = p+1; i <= n; ++i)
	{
		if(a[i]<val)
		{
			cout << 1 << " " << i << " " << i-1 << endl; 
		}
		else if(a[i]>val)
		{
			cout << 2 << " " << i << " " << i-1 << endl;
		}
	}
}