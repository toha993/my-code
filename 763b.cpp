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
	int p,q,ttl=1000000000,pos=0;
	cin >> p >> q;
	a[0]=0;
	for (int i = 1; i <=p; ++i)
	{
		/* code */
		int l;
		cin >> l;
		a[i] =a[i-1]+l;
		//cout << a[i] << endl;
	}
	for (int i = q,s=0; i <=p; ++i,s++)
	{
		int ans=a[i]-a[s];
		if(ans < ttl)
		{

			pos=i-q+1;
			ttl=ans;
			//cout << pos << endl;
		}
		//cout << ans << endl;
		//cout << i << endl;
	}
	cout << pos << endl;

}