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
#define endl "\n"
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()

{
	int p,k,paisi=1000000,ck=0,cp=0;
	int a[100005],pq[100005]={0};
	cin >> p >> k;
	set<int>st;
	for (int i = 1; i <= p; ++i)
	{
		cin >> a[i];
		if(pq[a[i]]==0)
		{
			ck++;
		}
		if(i<=paisi )
			pq[a[i]]++;
		st.insert(a[i]);
		if(ck==k && cp==0)
		{
			paisi=i;
			cp=1;
		}
	}
	if(st.size()<k)
	{
		cout << -1 << " " << -1 << endl;
		return 0;
	}
	for (int i = 1; i <= paisi; ++i)
	{
		pq[a[i]]--;
		if(pq[a[i]]==0)
		{
			cout << i << " " << paisi << endl;
			return 0;
		}
	}
}