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
int a[200005];
int main()
{
	int p,pos;
	cin >> p;
	for (int i = 0; i < p; ++i)
	{
		cin >> a[i];
	}
	long long ck =a[p-1];
	int pk=a[p-1]-1;
	for (int i = p-2; i >=0; i--)
	{
		if(a[i]<pk)
			{
				ck +=a[i];
				pk=a[i]-1;
			}
		else
		{
			ck +=pk;
			pk--;
		}
		if(pk<=0)
			break;
		//cout << pk << endl;
	}
	cout << ck << endl;
}
