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
int a[300005],xd[300005]={0};
void hbe(int a,int b,int c)
{
	for (int i = a; i <= 200000; i +=b)
	{
		xd[i]=c;
	}

}

int main()
{


	int n,t,cp=0,ans;
	cin >> n >> t;
	for (int i = 0; i < n; ++i)
	{
		int d;
		cin >> a[i] >> d;
		if(a[i]==t)
		{
			cp=1;
			ans=i+1;
		}
		hbe(a[i],d,i+1);
	}
	if(cp)
		{
			cout << ans << endl;
			return 0;
		}
	for (int i=t;;++i)
	{
		if(xd[i] !=0)
		{
			cout << xd[i] << endl;
			break;
		}
	}


}