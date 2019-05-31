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
	int a,b,c;
	cin >> a >> b >> c;
	if(b<a && c >=0)
	{
		cout << "NO" << endl;
		return 0;
	}
	if(c <=0 && b > a)
	{
		cout << "NO" << endl;
		return 0;
	}
	long long ans=b-a;
	if(c==0)
	{
		if(a==b)
		{
			cout << "YES" << endl;
			return 0;
		}
	else
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	if(ans%c==0 )
	{
		cout << "YES" << endl;
		return 0;
	}
	else
		cout << "NO" << endl;
}

