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

int a[200005],pq[200005];
int main()
{
	vector<int>v,b;
	int p,cp=0;
	cin >> p;
	for (int i = 0; i < p; ++i)
	{
		cin >> a[i];
		pq[a[i]]++;
		if(pq[a[i]]>=3)
		{
			cp=1;
		}
		if(pq[a[i]]==1)
			v.push_back(a[i]);
		if(pq[a[i]]==2)
			b.push_back(a[i]);
	}
	if(cp)
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;
	sort(v.begin(),v.end());
	sort(b.begin(),b.end(), greater<int>());
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << b.size() << endl;
	if(b.size()==0)
		cout << endl;
	else
	{
		for (int i = 0; i < b.size(); ++i)
		{
			cout << b[i] << " ";
		}
		cout << endl;
	}


}