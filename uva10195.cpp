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


int main()
{
	double p,q,r;
	while(cin >> p >> q >> r)
	{
		double s=(p+q+r)/2;
		double area=s*(s-p)*(s-q)*(s-r);
		//area=sqrt(area);
		//cout << area << " " << s << endl;
		area =area/(s*s);
		area=sqrt(area);
		//cout << area << endl;
		cout << "The radius of the round table is: ";
		if(p==0.0 || q== 0.0 || r==0.0)
			cout << 0 << ".000" << endl;
		else
			printf("%.3lf\n",area);

	}
}