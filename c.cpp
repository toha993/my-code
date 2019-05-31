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
#define mod 1000000007
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

long long ttl[100005],mx[100005];
int main()
{
	long long p,q,jor=0,bijor=0;
	cin >> p >> q;
	p--;
	long long sk=1;
	for (long long i = 0;; ++i)
	{
		long long x=pow(2LL,i);
		ttl[sk] =x+ttl[sk-1];
		if(ttl[sk] > p)
		{
			if(i%2==0)
			{
				bijor +=p-ttl[sk-1];
			}
			else
				{
					jor +=p-ttl[sk-1];
				}
			break;
		}
		if(i%2==0)
		{
			bijor +=x;

		}
		else
			jor +=x;
		sk++;
		if(ttl[sk]==p)
			break;
	}
//	cout << jor << " " << bijor << endl;
	long long first=0;
	first=((jor%mod)*((jor+1)%mod))%mod;
	//cout << first << endl;
	bijor= ((bijor%mod)*(bijor%mod))%mod;
	first =(first+bijor)%mod;
	//cout << first << endl;
	jor=0,bijor=0;
	long long xd=1;
	for (long long i = 0LL;; ++i)
	{
		long long x=pow(2LL,i);
		mx[xd] = x +mx[xd-1];
		if(mx[xd] > q)
		{
			if(i%2==0)
			{
				bijor +=q-mx[xd-1];
			}
			else
				{
					jor +=q-mx[xd-1];
				}
			break;
		}
		if(i%2==0)
		{
			bijor +=x;

		}
		else
			jor +=x;
		//cout << jor << " " << bijor << endl;
		if(mx[xd]==q)
			break;
		xd++;
	}
	long long second=0;
	//long long first=0;
	second=((jor%mod)*((jor+1)%mod))%mod;
	//cout << first << endl;
	bijor = ((bijor%mod)*(bijor%mod))%mod;
	second=(second+bijor)%mod;
	//cout << second << endl;	
	cout << (second-first+mod)%mod << endl;








}