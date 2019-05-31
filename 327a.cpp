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
	int a[100005];
	int p,first,cp=1,last,age=0;
	cin >> p;
	for (int i = 0; i < p; ++i)
	{
		cin >> a[i];
		if(a[i]==0 && cp)
			{
				first=i;
				cp=0;
			}
		else if(a[i]==0)
			{
				last=i;
			}
		else
			age++;
	}
	int mx=age;
	//cout << first << " " << last <<  endl;
	int ck=0,cn=0;
	if(last < first)
		last=first;
	for (int j = first; j <=last ; ++j)
	{
		
		for (int i =j; i <= last; ++i)
		{
			if(a[i]==0)
				ck++;
			else
				cn++;
			mx=max(mx,age+ck-cn);
		}
		//cout << ck << " " << cn << endl;
		ck=0,cn=0;
	}
	//cout <<  << endl;
	if(mx==age)
		cout << age-1 << endl;
	else
		cout << mx << endl;

















}