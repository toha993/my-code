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
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set
int main()
{
	//sieve();
	int n;
	cin >> n;
	while(n--)
	{
		int x;
		cin >> x;
		if(x==1 || x==0)
		{
			cout << 0 << endl;
			continue;
		}
		long long ans=0;
		for (int i = 2; i <= sqrt(x) ; ++i)
		{
			if(x%i==0)
			{
				//cout << x/i << " " << i << endl;
				if(x/i != i)
					ans +=(x/i)+i;
				else
					{
						ans +=i;
						break;
					}
			}
		}
		cout << ans+1 << endl;
	}

}