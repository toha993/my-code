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


int a[300005],x[300005],first[300005],last[300005],pt[300005];
int main()
{
	int p,ck1=0,ck2=0,mx=0,ans=0;
	cin >> p;
	for (int i = 0; i < p; ++i)
	{
		cin >> a[i];
	}
	for (int i = p-2; i >= 0; i--)
	{
		if(a[p-1] != a[i])
			{
				//cout << a[ck1] << " " << a[i] << endl;
				ck2=i;
				ck1=p-1;
				break;
			}

	}
	//cout << a[ck1] << " " << a[ck2] << endl;
	//cout << ck1 << " " << ck2 << endl;
	for (int i = 0; i < p; ++i)
	{
		if(a[i]!=a[ck1])
		{
			mx=max(ck1-i,mx);
		}
		if(a[i]!=a[ck2])
		{
			mx=max(ck2-i,mx);
		}
	}

	cout << mx << endl;
}