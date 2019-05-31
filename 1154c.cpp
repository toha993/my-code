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

int a[15],pd[3]; 
int main()
{	
	a[1]=a[4]=a[8]=a[11]=0; //0 means raddit;
	a[2]=a[3]=a[6]=a[9]=a[10]=a[13]=1; //1 means fish;
	a[5]=a[7]=a[12]=a[14]=2; // 2 means chicken;
	long long p,q,r;
	cin >> p >> q >> r; // fish,rabbit,chick
	pd[0]=q;
	pd[1]=p;
	pd[2]=r;
	long long ans=0,hbena=700000008;
	long long mn=min(min(p/3,q/2),r/2);
	ans =mn*7;
	q -=mn*2;
	p -=mn*3;
	r -=mn*2;
	int mx=0;
	for (int i = 1; i <= 7; ++i)
	{
		int x=p;
		int y=q;
		int z=r;
		int ck=0;
		for (int j = i; j <=14 ; ++j)
		{
			if(a[j]==0)
			{
				if(y==0)
					break;
				ck++;
				y--;

			}
			else if(a[j]==1)
			{
				if(x==0)
					break;
				ck++;
				x--;
				
			}
			else if(a[j]==2)
			{
				if(z==0)
					break;
				ck++;
				z--;
				
			}
		}
		
		mx=max(ck,mx);
	}
	ans +=mx;
	cout << ans << endl;
}