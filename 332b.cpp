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
long long sum[200005],a[200005];
vector<long long>v;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int main()
{
	int n,k;
	cin >> n >> k;
	sum[0]=0;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		sum[i]=sum[i-1]+a[i];
	}
	for (int i = k; i <= n; ++i)
	{
		v.push_back(sum[i]-sum[i-k]);
	}
	long long hbe=0,mx=0,suru,ssh,ans;
	for (int i = 0; i+k<v.size(); ++i)
	{
		if(v[i]>mx)
		{
			suru=i+1;
			mx=v[i];
		}
		if(mx+v[i+k]>hbe)
		{
			ssh=i+k+1;
			ans=suru;
			hbe=mx+v[i+k];
		}
	}
	cout << ans << " " << ssh << endl;

}