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
#define sc second
#define f first
using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main()
{
	int n,m;
	cin >> n >> m;
	vector<pair<int,int>>v,a;
	int xp,d;
	for (int i = 0; i < m; ++i)
	{
		cin >> xp >> d;
		v.push_back({xp,d});
	}
	int x[5],xd,xc;
	xd=x[0]=v[0].f;
	xc=x[1]=v[0].sc;
	int ssh;
	for (int i = 0; i < m; ++i,ssh=i)
	{
		if((v[i].f!=xd&&v[i].f!=xc)&&(v[i].sc !=xd&&v[i].sc!=xc ))
		{
			x[2]=v[i].f;
			x[3]=v[i].sc;
			ssh=i;
			break;
		}
		//ssh=i;
	}
	//cout << x[0] << " " << x[1] << " " << x[2] << " " << x[3] << endl;
	if(ssh==m)
	{
		cout << "YES" << endl;
		return 0;
	}
	for (int bl = 0; bl < 4; ++bl)
	{
		for (int j = 0; j < 4; ++j)
		{
			xd=x[bl];
			xc=x[j];
			ssh=0;
			//cout << xd << " " << xc << " " ;
			for (int i = 0; i < m; ++i,ssh=i)
				{
					if((v[i].f!=xd&&v[i].f!=xc)&&(v[i].sc !=xd&&v[i].sc!=xc ))
					{
						ssh=i;
						break;
					}
					//ssh=i;
				}
			//cout << ssh << endl;
			if(ssh==m)
				{
					cout << "YES" << endl;
					return 0;
				}

		}

	}
	
	cout << "NO" << endl;
}