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
	int n,a,x,b,y;
	cin >> n >> a >> x >> b >> y;
		int g=a;
		int h=b;
		int flag=0;
		while(h !=y || g !=x)
		{
			h--;
			g++;
			if(g==n+1)
				g=1;
			if(h==0)
				h=n;
			//cout << h << " " << g << endl;	
			if(h==g)
			{
				flag=1;
				break;
			}
			if(h==y || g==x)
				break;		
		}
		if(flag)
		{
			cout << "YES" << endl;
 		}
 		else
 			cout << "NO"  << endl;
}