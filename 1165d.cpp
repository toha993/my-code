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
int divisor(long long n)
{
	int ck=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			if(n/i==i)
					ck++;
				else if(n/i !=i)
					ck +=2;
		}
	}
	return ck;

}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long a[1000005];
		int p;
		cin >>p;
		for (int i = 0; i < p; ++i)
		{
			cin >> a[i];
		}
		sort(a,a+p);
		int mara=0;
		long long ans=a[0]*a[p-1];
		int xd=divisor(ans);
		if(p !=xd)
		{
			cout << -1 << endl;
			continue;
		}
		for (int i = 1; i <=p/2; ++i)
		{
			if(a[i]*a[p-i-1] != ans)
			{
				//cout << a[i]*a[p-i-1] << endl;
				mara=1;
				break;
			}
		}
		if(mara)
		{
			cout << -1 << endl;
		}
		else
			cout << ans << endl;
	}
}