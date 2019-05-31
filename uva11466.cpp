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
set<int>st;
long long mx;
void sieve(long long n)
{
	mx=-1;
	while(n%2==0)
	{
		mx=2;
		st.insert(2);
		n /= 2;
	}
	for (int i = 3; i <= sqrt(n); i +=2)
	{
		while(n%i==0)
		{
			st.insert(i);
			mx=i;
			n /=i;
		}
	}
	if(n>2)
	{
		st.insert(n);
		mx=n;
	}
}
int main()
{
	long long n;
	while(cin >> n)
	{
		if(n==0)
			break;
		if(n<0)
			n *= -1;
		sieve(n);
		if(mx==n || st.size()==1)
		{
			cout << -1 << endl;
		}
		else
			cout << mx << endl;
		st.clear();
	}
}