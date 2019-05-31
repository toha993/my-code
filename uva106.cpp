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
//solven
int a[1000005];
int main()
{
	int n;
	while(cin >> n)
	{
		int ck=0;
		for (int i = 1; i <= n; ++i)
		{
			a[i]=0;
		}
		int sq=sqrt(n);
		if(sq*sq < n)
			sq++;
		for (int i = 1; i <=sq; ++i)
		{
			for (int j = i+1; j <=sq; ++j)
			{
				if(__gcd(i,j)==1)
				{
					int x=j*j-i*i;
					int y=j*j+i*i;
					int z=2*i*j;
					if(y>n)
						break;

					if((__gcd(__gcd(x,y),z))==1)
					{
						ck++;
					}
					int ab=x,bc=y,ca=z;
					while(bc<=n)
					{
						a[ab]=a[bc]=a[ca]=1;
						ab +=x;
						bc +=y;
						ca +=z;
					}
				}

			}
		}
		int cnt=0;
		for (int i = 1; i <=n; ++i)
		{
			if(a[i])
				cnt++;
		}
		cout << ck << " " << n-cnt << endl;
	}
}