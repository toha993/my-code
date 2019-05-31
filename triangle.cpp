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
//solution tourist
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int a[300005];
int main()
{
	int n;
	cin >> n;
	//ll ans=0;
	//map<int,int>mp;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	ll xd=0,ans=0;
	for (int i = n-1; i>=0; --i)
	{
		xd += a[i]/2;
		if(a[i]%2==1 && xd>0)
		{
			ans ++;
			xd--;
		}
	}
	//cout <<xd << endl;
	ans +=(2*xd)/3 ;
	cout << ans << endl;

}