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

int n,c,mid;
int a[100005];
bool chk(int x)
{
	int last=a[0];
	int ck=1;
	for (int i = 1; i < n; ++i)
	{
		if((a[i]-last) >=x)
		{
			ck++;
			last=a[i];
		}
	}
	if(ck>=c)
		return true;

	return false;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int mn=0;
		cin >> n >> c;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		sort(a,a+n);
		int low=0,high=1000000000;
		while(high>=low)
		{
			int mid=(high+low)/2;
			//cout << mid << endl;
			if(chk(mid))
			{
				low=mid+1;
				mn=mid;
			}
			else
			{
				high=mid-1;
			}
		}
		cout << mn << endl;





	}







}