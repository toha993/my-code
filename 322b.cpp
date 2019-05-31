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
	long long a,b,c,mx=0,ans=0;
	cin >> a >> b >> c;
	if(a==b && b==c)
	{
		cout << a << endl;
		return 0;
	}
	for (int i = 0; i < 3; ++i)
	{
		if(i<=a && i <= b && i <=c)
		{
			ans =i+(a-i)/3+(b-i)/3+(c-i)/3;
			mx=max(mx,ans);
		}
	}
	cout << mx << endl;
}