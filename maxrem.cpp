#include<bits/stdc++.h>
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int a[200005];
set<int>st;
int main()
{
	int n;
	cin >>n;
	for (int i = 0; i < n; ++i)
	{
		cin >>a[i];
		st.insert(a[i]);
	}
	if(st.size()>=2)
		cout << *(--(--st.end())) << endl;
	else
		cout << 0 << endl;
}