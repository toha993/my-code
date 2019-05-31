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
//editorial
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n,m,k;
		cin >> n >> m >> k;
		if(m>n)
			swap(n,m);
		if(k<n)
		{
			cout << -1 << endl;
			continue;
		}
		if(n%2 != m%2)
		{
			n -=1;
			m -=1;
			k -=1;
		}
		else if(n%2 != k%2)
		{
			n -=1;
			m -=1;
			k-=2;
		}
		if(k<n)
		{
			cout << -1 << endl;
			continue;
		}
		else
			cout << k << endl;
	}
}