#include<bits/stdc++.h>
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
		int p,q;
		cin >> p >> q;
		int x=p%10;
		if(p==0)
			{
				cout << 0 << endl;
				continue;
			}
		if (q==0)
		{
			cout << 1 << endl;
			continue;
		}
		int y=q%4;
		if(y==0)
			y=4;
		int ans=(int)pow(x,y);
		cout << ans%10 << endl;
	}
} 