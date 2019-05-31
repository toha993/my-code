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
//#define f first
//#define sc second
#define pb push_back
#define mp make_pair
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
//solven
typedef pair<int,int>pi;
vector<pi>v;
bool cmp(pi a,pi b)
{
	return a.first*b.second<b.first*a.second; 
}
int gcd(int a,int b)
{
	if(b==0) return a;
	return gcd(b,a%b);
}
int  main()
{
	int n,m;

	while(scanf("%d%d",&n,&m)==2)
	{
			v.clear();
		for (int i = 1; i<=n; i++)
			for (int j = 1; j<=i; ++j)
					if(gcd(j,i)==1)
						v.pb(mp(j,i));
		sort(v.begin(),v.end(),cmp);
		// for (int i = 0; i < v.size(); ++i)
		// {
		// 	cout << v[i].first << " " << v[i].second << endl;
		// }
		//cout << m << endl;
		cout << v[m-1].first << "/" << v[m-1].second<< endl;
		
	}

}