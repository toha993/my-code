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
//solve
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int a[5005],ans[5005];
int main()
{
	int n;
	while(cin >> n && n)
	{
		priority_queue<int,vector<int>,greater<>>pq;
		for (int i = 1; i <=n ; ++i)
		{
			int x;
			cin >> x;
			pq.push(x);
		}
		int ttl=0;
		while(pq.size()>1)
		{
			int t=pq.top();
			pq.pop();
			t +=pq.top();
			pq.pop();
			ttl +=t;
			pq.push(t);
		}
		cout << ttl << endl;

	}
}