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
long long cnt;
int a[200005];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
long long invcnt(int arr[5],int q)
{
	set<int>st;
	set<int>::iterator it;
	st.insert(a[0]);
	cnt=0;
	for (int i = 1; i <q ; ++i)
	{
		st.insert(a[i]);
		it=st.upper_bound(a[i]);
		cnt +=distance(it,st.end());
	}
	return cnt;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int p;
		cin >> p;
		for (int j = 0; j < p; ++j)
		{
			cin >> a[j];
		}
		long long ans=invcnt(a,p);
		cout << ans << endl;
	}
}