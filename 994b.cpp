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
long long arr[100005],b[100005],sum[100005];
pair<pair<long long,long long>,long long>p[100005];
int main()
{
	long long a,q,k;
	cin >> a >> k;
	for (int i = 0; i < a; ++i)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < a; ++i)
	{
		cin >> b[i];
		p[i]=make_pair(make_pair(arr[i],b[i]),i);
	}
	sort(p,p+a);
	/*for (int i = 0; i < a; ++i)
	{
		cout << p[i].first.first << " "<< p[i].first.second << " " << p[i].second << endl;
	}*/
	priority_queue<long long>pq;
	long long ttl=0;
	for (int i = 0; i < a; ++i)
	{
		ttl +=p[i].first.second;
		pq.push(-p[i].first.second);
		sum[p[i].second]=ttl;
		//cout << pq.top() << endl;
		if(pq.size() > k)
		{
			cout << pq.top() << endl;
			ttl +=pq.top();
			pq.pop();
		}
		//cout << ttl << endl;
	}
	for (int i = 0; i < a; ++i)
	{
		cout << sum[i] << endl; 
	}
}