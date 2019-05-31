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
//[parina bal]
int a[11];
int main()
{
	int t;
	string p,x;
	cin >> t;
	string s;
	cin >> s;
	// for (int i = 0; i < t; ++i)
	// {
	// 	cout << (int)s[i] << endl;
	// }
	for (int i = 1; i < 10; ++i)
	{
		cin >> a[i];
	}
	// for (int i = 1; i < 10; ++i)
	// {
	// 	cout << a[i]+'0' << endl;
	// }
	int flag=0;
	for (int i = 0; i <t; ++i)
	{

		char d=s[i];
		int c=d-'0';
		if(c < a[c])
			{
				flag=1;
				s[i]= a[c]+48;
			}
		if(flag==1 && c >a[c])
			break;
	}
	//cout << x << " " << p << endl;
	cout << s << endl;

}