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
#define ll long long
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	ll n,a;
	ll total=0;
	ll prime;
	int cp,cnt;
	cin >> n >> a;
	for (int i = a; i <= a+500; ++i)
	{
		for (int j = 2; j <= sqrt(a); ++j)
		{
			if(i%j==0)
			{
				cp=1;
				cnt=0;
				break;
			}
			else
				{
					cp=0;
					cnt=1;
				}
		}
		if(cp==0 && cnt ==1)
		{
			prime=i;
			break;
		}
	}
	int nibo;
	if(prime>=a  && prime <=n+a)
		{
			nibo=1;			
		}
		else
			nibo=0;
	if(nibo)
	{
		//cout <<  << endl;
		ll ttl=(n*(a+a+n-1))/2;
		cout << ttl << endl;
		return 0;
	}
	else
	{
		ll ttl=((n-1)*(a+a+n-2))/2;
		ttl +=prime;
		cout << ttl << endl;
		return 0;
	}
}