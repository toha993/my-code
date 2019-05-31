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


int main()
{
	pair < int,int>p[100];
	int a,q,ck=0;
	cin >> a >> q;
	for (int i = 0; i < a; ++i)
	{
		cin >> p[i].first >> p[i].second;
		p[i].second=100-p[i].second;
	}
	sort(p,p+a);
	int l=p[a-q].first;
	int m=p[a-q].second;
	/*for (int i = 0; i < a; ++i)
	{
		cout << p[i].first << " " <<  p[i].second << endl;;
	}*/
	//cout << l << " " << m << endl;
	for (int i = a-1; i >=0; i--)
	{
		if(p[i].first==l && p[i].second==m)
			ck++;
		if(p[i].first<l)
			break;
	}
	cout << ck << endl;
}