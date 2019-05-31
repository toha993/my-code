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
#define ll long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		ll l,r,g;
		cin >> l >> r >> g;
		ll ans1=l/g;
		if(l%g==0)
			ans1--;
		ll ans2=r/g;
	//	cout << l << " " << r << endl;
		if(ans2-ans1==1)
		{ 
			if(l<=g && g <=r)
				{
					cout << 1 << endl;
					continue;
				}
			ll xd=(g*ans2);
			//cout << xd << endl;
			if(l<=xd && xd <=r)
				cout << 0 << endl;
			else
				cout << 1 << endl;
			continue;
		}
		cout << max(abs(ans2-ans1),0ll) << endl;

	}
}