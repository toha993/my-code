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
//editorial
int a[105];
int cnt[4];
int main()
{
	int m,p;
	cin >> m >> p;
	int seat2=m*2;
	int seat4=m;
	int seat1=0;
	//cout << seat2 << " " << seat4 << endl;
	for (int i = 0; i < p; ++i)
	{
		int x;
		cin >> x;
		while(x >=3)
		{
			if(seat4>0)
				{
					x -=4;
					seat4--;
				}
			else if(seat2>0)
				{
					x -=2;
					seat2--;
				}
			else
			{
				cout << seat2 << " " << seat4 << endl;
				cout << "NO" << endl;
				exit(0);
			}
		}
		if(x>0)
			cnt[x]++;
		//cout << seat2 << " " << seat4 << endl;

	}
	//cout << cnt[2] << endl;
	while(cnt[2])
	{
		if(seat2>0)
		{
			seat2--;
			cnt[2]--;
		}
		else if(seat4>0)
		{
			cnt[2]--;
			seat4--;
			seat1++;
		}
		else
		{
			cnt[1] +=2;
			cnt[2]--;
		}
		//cout << seat2 << " " << seat4 << endl;
	}
	if(cnt[1] > seat4*2+seat2+seat1)
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << "YES" << endl;

}