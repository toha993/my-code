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

map<int,int>vis;
int main()
{
	int n;
	cin >> n;
	int p=n;
	//vis[n]=1;
	int ck=1;
	n=n+1;

	while(vis[n]==0)
	{
		while(n%10==0)
		{
			n /=10;
		}
		if(n==p || vis[n])
			break;
		//cout << n << endl;
		ck++;
		vis[n]=1;
		n=n+1;
	}
	cout << ck << endl;
}