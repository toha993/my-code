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


int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--)
	{
		ll m,n,x,y;
		cin >> m >> n >> x >> y;
		if(x==0)
		{
			if(m==0)
			{
				cout << 0 << endl;
			}
			else
				cout << -1 << endl;
			continue;
		}
		if(x==y && x==1)
		{
			if(m==n)
			{
				cout << 0 << endl;
			}
			else
				cout << -1 << endl;
			continue;
		}
		double xd,xc;
		xd=(double)m/n;
		xc=(double)x/y;
		//cout << xd << " " << xc << endl;
		if(xd==xc)
		{
			cout << 0 << endl;
		}
		else if(xd>xc)
		{
			ll zx=(m+x-1)/x;
			cout << zx*y-n << endl;
		}
		else
		{
			ll zx=(n-m)+(y-x-1);
			zx /=(y-x);
			cout << zx*y-n << endl;
		}
	}

}