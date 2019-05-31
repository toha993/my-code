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


int main()
{
	int n;
	while(cin >> n)
	{
		long long a=0,b=0,c=0,d=0,e=0,f=0,ans=0;
		for (int i = 1; i <=n ; ++i)
		{
			a +=i*i;
		}
		for (int i = 1; i <=n ; ++i)
		{
			c +=i*i*i;
		}
		for (int i = 1; i <=n ; ++i)
		{
			e +=i*i*i*i;
		}
		for (int i = 1; i <=n; ++i)
		{
			ans +=i;
		}
		b=pow(ans,2)-a;
		d=pow(ans,3)-c;
		f=pow(ans,4)-e;
		cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;

	}
}