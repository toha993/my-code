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

int a[100005];
int main()
{
	string s;
	cin >> s;
	int ck=0;
	a[0]=0;
	for (int i = 1; i < s.length(); ++i)
	{
		if(s[i]==s[i-1])
			{
				a[i]=ck+1;
				ck++;
			}
		else
			a[i]=ck;
	}
	/*for (int i = 0; i < s.length(); ++i)
	{
		cout << a[i] << endl;
	}*/
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i)
	{
		int q,qq;
		cin >> q >> qq;
		q--,qq--;
		cout << max(a[qq]-a[q],0) << endl;
	}
}