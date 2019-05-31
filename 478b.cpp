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
	long long a,b;
	cin >> a >> b;
	long long minx=0,maxx=0;
	if(b==1)
	{
		a--;
		cout << (a*(a+1))/2 << " " <<  (a*(a+1))/2 <<endl;
		return 0;
	}
	else if(b>=a)
	{
		cout << 0 << " " << 0 << endl;
	}
	else
	{
		long long dui=a/b;
		minx =(b*dui*(dui-1))/2;
		minx +=(a%b)*dui;
		long long ebr=b-1;
		long long khela=(a-ebr);
		khela--;
		maxx=(khela*(khela+1))/2;
		cout << minx << " " << maxx << endl;








	}






}