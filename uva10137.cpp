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
	int n;
	while(cin >> n && n)
	{
		double a[n],ans=0.0;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			ans +=(a[i]);
		}
		ans /=n;
		double xtra=0.0,low=0.0,dif=0;
		for (int i = 0; i < n; ++i)
		{
			dif=(double)(long)((a[i] - ans)*100)/100.0;
			if(dif>0)
			{
				
				xtra +=dif;
			}
			else
			{
				low +=abs(dif);
			}	
		}
		if(xtra>low)
		{
			printf("$%.2lf\n",low);
		}
		else
			printf("$%.2lf\n",xtra);
	}
}