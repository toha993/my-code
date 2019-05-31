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
	int n,a,b,c;
	cin >> n >> a >> b >> c;
	int mx=0;
	for (int i = 0;i<= 4000; ++i)
	{
		for (int j = 0; j <= 4000; ++j)
		{
			int m=n-a*i-b*j;
			if(m%c==0 && m >=0 )
			{	
				int p;
				p=m/c;
				mx=max(mx,i+j+p);
				// /if(i+j+p>mx)
				// 	cout << i << " " << j << " "<< p << endl;
			}
			else
				continue;
		}
	}
	cout << mx << endl;
}