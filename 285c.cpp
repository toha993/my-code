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
long long a[300005];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main()
{
	int p;
	cin >> p;
	for(int i=0;i<p;i++)
	{
		cin >> a[i];
		//cout << a[i]  << endl;
	}
	sort(a,a+p);
	long long ck=0;
	for (int i = p-1; i >=0; i--)
	{
		//cout << a[i] << endl;
		if(a[i]!=i+1)
		{
			ck += abs(a[i]-(i+1));
		}
		//cout << ck << endl;
	}
	cout << ck << endl;
}
