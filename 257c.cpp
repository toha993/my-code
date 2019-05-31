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
#define pi acos(-1)
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

vector<double>v;
int main()
{
	int n;
	double angle;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		int x,y;
		cin >> x >> y;
		angle= atan2(y,x);
		v.push_back(angle);
	}
	sort(v.begin(),v.end());
	v.push_back(v[0]+pi*2);
	double mn=0.0,freak;
	for (int i = 1; i <v.size() ; ++i)
	{
		freak=v[i]-v[i-1];
		if(freak>mn)
			mn=freak;
	}
	mn=(2*pi-mn);
	mn=(mn*180)/pi;
	printf("%.10lf\n",mn );
}