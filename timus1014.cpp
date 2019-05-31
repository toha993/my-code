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
void solve(int n)
{
	if(n==0)
	{
		cout << 10 << endl;
		exit(0);
	}
	if(n<=9)
		{
			cout << n << endl;
			exit(0);
		}
	stack<int>st;
	for (int i=9; i>=2 && n >1; i--)
	{
		while(n%i==0)
		{
			st.push(i);
			n /=i;
		}
	}
	if(n!=1)
	{
		cout << -1 << endl;
		exit(0);
	}
	long long  ans=0;
	while(!st.empty())
	{
		ans=ans*10+st.top();
		st.pop();
	}
	cout << ans << endl;

}

int main()
{
	int q;
	cin >> q;
	solve(q);
}