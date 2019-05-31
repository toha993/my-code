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
	int n,p,q;
	string a;
	cin >> n  >> p >> q;
	cin >> a;
	int ck=0;
	for(int i=n-p;i<n;i++)
	{
		if(a[i]!='0' && i !=n-q-1)
			ck++;
		//cout << ck << endl;
	}
	if(a[n-q-1]=='0')
			ck++;
	cout << ck << endl;
}