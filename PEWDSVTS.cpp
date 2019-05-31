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
	int t;
	cin >> t;
	while(t--)
	{
		ll n,a,b,x,y,z;
		cin >> n>> a >> b >> x >> y >>z;
		priority_queue<ll>pq;
		ll ans=(z-b)/y;
		if((z-b)%y !=0) ans++;
		ll thkbe=(ans-1)*x;
		ll lgbe=z-a-thkbe;
		while(n--)
		{
			int x;
			cin >> x;
			pq.push(x);
		}
		ll nisi=0,ck=0,prbena=0;
		//cout << nisi << " " << lgbe << endl;
		while(nisi < lgbe)
		{
			ll u=pq.top();
			if(u==0)
				{
					prbena=1;
					break;
				}
			nisi +=u;
			ck++;
			pq.pop();
			pq.push(u/2);
		}
		if(prbena)
			cout << "RIP" << endl;
		else
		cout << ck << endl;
	}
}