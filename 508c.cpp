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

int arr[305],drkr[100005]={0};
int main()
{
	int ghost,dur,req,cnt=0,d;
	cin >> ghost >> dur >> req;
	for (int i = 0; i < ghost; ++i)
	{
		int x;
		cin >> x;
		arr[i]= x+1000;
	}
	if(req > dur)
	{
		cout << -1 << endl;
		return 0;
	}
	for (int i = 0; i < ghost; ++i)
	{
		if(drkr[arr[i]]<req)
		{
			//cout << drkr[arr[i]] << endl;
			d=req-drkr[arr[i]];
			cnt +=d;
			//cout << d << endl;
			for (int j = arr[i]-d+1; j<=arr[i] ; ++j)
			{
				for (int k =j; k < j+dur; ++k)
				{
					drkr[k] +=1;
					//cout << k << endl;
				}
			}

		}
	}
	cout << cnt << endl;

}