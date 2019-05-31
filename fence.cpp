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

map<pair<int,int>,int>mp;
vector<pair<int,int>>vec;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int p,q,r;
		cin >> p >> q >> r;
		for (int i = 0; i < r; ++i)
		{
			int aa,bb;
			cin >> aa >> bb;
			mp[make_pair(aa,bb)];
			vec.push_back(make_pair(aa,bb));
		}
		int ck=0;
		for (int i=0; i<vec.size() ; i++)
		{
			int x= vec[i].first;
			int y= vec[i].second;
			if(y==1 || y==q)
				ck+=1;
			if(x==1 || x==p)
				ck +=1;
			if(x+1<=p)
			{
				if(mp.find(make_pair(x+1,y))==mp.end())
				ck+=1;
			}
			if(y+1<=q)
			{
				if( mp.find(make_pair(x,y+1))==mp.end())
					ck +=1;
			}
			if(y-1>=1)
			{
				if( mp.find(make_pair(x,y-1))==mp.end())
					ck +=1;
			}
			if(x-1>=1)
			{
				if( mp.find(make_pair(x-1,y))==mp.end())
					ck +=1;
			}
			//cout << x << " " << y << endl;

		}
		cout << ck << endl;
		mp.clear();
		vec.clear();





	}






}