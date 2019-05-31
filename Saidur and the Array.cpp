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
int a[100005];

int main()
{
	int n,m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		int l,r;
		set<int>st;
		cin >> l >> r;
		l--,r--;
		for (int i = l; i <=r ; ++i)
		{
			st.insert(a[i]);
		}
		int ck=0;
		int bam=0,xd=0;
		for (auto it = st.begin();it != st.end(); it++)
		{
			int p=*it;
			ck++;
			
			if(ck <=st.size()/2)
			{
				bam +=p;
			}
			else
			{
				xd +=p;
			}
		}
		cout << xd-bam << endl;
		st.clear();

	}




}