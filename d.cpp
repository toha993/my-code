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
		long long n,m;
		//int flag=0;
		cin >> n >> m;
		if(m<n)
			cout << m << endl;
		else if(m==n)
			cout << m-3 << endl;
		else
		{
			long long ans=0;
			long long baki=m-n;
			long long a[n+1];
			for (int i = 1; i <= n; ++i)
			{
				ans +=i;
				a[i+1]=ans-i;
				//cout << a[i+1] << endl;
			}
			long long xd=upper_bound(a,a+n+1,baki)-a;
			cout << n-xd << endl;
			//cout << n-xd+1 << endl;
		}
		
	}
}