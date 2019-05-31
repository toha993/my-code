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
	int a,b;
	while(cin >> a >> b && (a || b))
	{
		if(b==100 || b==0 || a==0)
		{
			cout << "Not found" << endl;
			continue;
		}
		double ans=((a-1)*(b))/100.0;
		//cout << ans << endl;
		long long print;
		if(ans-(long long)ans>0.0000)
		{
			print=(a-1)+(long long)(ans+1);
			if(print<a)
			{
				cout << "Not found" << endl;
				continue;
			}
			cout << print << endl;
		}
		else
		{
			print=(a-1)+(long long)ans;
			if(print<a)
			{
				cout << "Not found" << endl;
				continue;
			}
			cout << print << endl;
		}

	}
}