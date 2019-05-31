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
long long a[100005],b[100005];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int main()
{
	int n,k,dif=0;
	cin >> n >> k;
	a[0]=0;
	for (int i = 1; i <= n; ++i)
	{
		int x;
		cin >> b[i];
		a[i] +=i+a[i-1];
	}
	a[n+1]=a[n-1]+n+1;
	if(n==1)
	{
		cout << b[1] << endl;
		return 0;
	}
	for (int i = 1; i <= n; ++i)
	{
		if(k>=a[i] && k<a[i+1])
		{
			//cout << a[i+1] << endl;
			dif=a[i+1]-k;
			//cout << dif << endl;
			if(i+1-dif !=0)
 				cout << b[i+1-dif] << endl;
 			else
 				cout << b[i] << endl;
			return 0;
		}
	}





}

