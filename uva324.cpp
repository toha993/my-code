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
vector<int>v[370];
void bla()
	{
		v[0].push_back(1);
		for (int i = 1; i < 367; ++i)
		{
			long long car=0,ans;
			for (int j = 0; j < v[i-1].size(); ++j)
			{
				ans=v[i-1][j]*i+car;
				if(ans>=10)
				{
					car=ans/10;
					v[i].push_back(ans%10);
				}
				else
					{
						v[i].push_back(ans);
						car=0;
					}

			}
			if(car>0)
			{
				while(car !=0)
				{
					//car=car/10;
					v[i].push_back(car%10);
					car /=10;
				}
			}
		}
	}
//int a[10];
int main()
{
	int n;
	bla();
	while(cin >> n && n)
	{
		cout << n<< "! --" << endl;
		int a[10]={0};
		//cout << v[n].size() << endl;
		for (int i = 0; i < v[n].size(); ++i)
		{
			//cout << v[n][i] << endl;
			a[v[n][i]]++;
		}

		for (int i = 0; i <=9 ; ++i)
		{
			if(i==0 || i==5)
				cout << "   ";
			cout << "(" << i << ")" << " " << a[i] << " ";
			if(i==4 || i==9)
				cout << endl;
		}
	}
}