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

long long a[100005],b[100005];
int main()
{
	int n;
	cin >> n;
	a[0]=b[0]=0;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		b[i]=a[i];
		a[i] +=a[i-1];
	}
	sort(b+1,b+n+1);
	for (int i =1; i <= n; ++i)
	{
		b[i] +=b[i-1];
	}
	/*for (int i =0; i <= n; ++i)
	{
		cout << b[i] << " ";
	}*/
	//cout << endl;
	int m;
	cin >> m;
	for (int i = 0; i < m; ++i)
		{
			int l;
			cin >> l;
			if(l==1)
			{
				int y,z;
				cin >> y >> z;
				cout << a[z]-a[y-1] << endl;
			}
			if(l==2)
			{
				int q,qq;
				cin >> q >> qq;
				//cout << a[qq] << " " << a[q] << endl;
				cout << b[qq]-b[q-1] << endl;
			}
		}	

}