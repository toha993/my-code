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
	int n;
	while(cin >> n)
	{
		map<int,int>mp;
		int a[3005];
		cin >> a[0];
		for(int i=1;i<n;i++)
		{
			cin >> a[i];
			int dif=abs(a[i]-a[i-1]);
			mp[dif]=1;
		}
		int flag=0;
		for (int i = 1; i <n ; ++i)
		{
			if(mp[i] !=1)
			{
				flag=1;
				break;
			}
		}
		if(flag)
		{
			cout << "Not jolly" << endl;
		}
		else
			cout << "Jolly" << endl;
	}
}