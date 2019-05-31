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
	ll n,p,a,b;
	cin >> n >> p >> a >>b;
	if(a*n>p)
	{
		cout << "No" << endl;
		return 0;
	}
	else
	{
		//cout<< "Yes" << endl;
		ll xd=n*a;
		ll xc=(a-b)*n;
		double pp=(xc*1.0*0.1);
		if(pp<=0.0)
		{
			pp=0.0;

		}
		cout<< "Yes" << endl;
		printf("%.6lf",pp);
		cout << endl;



	}

}