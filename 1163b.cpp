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
//solution
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int a[100005],cnt[100005];
int main()
{
	int q;
	cin >> q;
	int mx=0,hbe,ck=0;
	for (int i = 1; i <=q; ++i)
	{
		int x;
		cin >> x;
		if(a[x]==0)
		{
			ck++;
			a[x]++;
		}
		else
		{
			cnt[a[x]]--;
			a[x]++;
		}
		cnt[a[x]]++;
		mx=max(mx,a[x]);
		if(mx==1)
			hbe=i;
		else if(cnt[mx]==1 && cnt[mx-1]==ck-1)
			hbe=i;
		else if(cnt[1]==1 && cnt[mx]==ck-1)
			hbe=i;

	}
	cout << hbe << endl;
	
}