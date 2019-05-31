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
//solution
int a[200005];
int main()
{
	int p;
	cin >> p;
	for (int i = 0; i < p; ++i)
	{
		cin >> a[i];
	}
	multiset<int>st;
	for (int i = 0; i < p; ++i)
	{
		int b;
		cin >> b;
		st.insert(b);
	}
	for (int i = 0; i < p; ++i)
	{
		int x=a[i];
		auto it=st.lower_bound(p-x);
		if(it==st.end())
		{
			it=st.begin();
		}
		cout << (x+*it)%p <<  " ";
		st.erase(it);

	}
	cout << endl;
}