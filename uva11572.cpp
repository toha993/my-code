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
	int t;
	cin >> t;
	while(t--)
	{
		map<int,int>mp;
		int n;
		cin >> n;
		int ck=0,ans=0;
		queue<int>q;
		while(n--)
		{
			int x;
			cin >> x;
			if(mp[x]==0)
			{
				mp[x]=1;
				q.push(x);
			}
			else
			{
				int xd=q.size();
				//cout << xd << endl;
				ans=max(xd,ans);
				while(q.front() != x && !q.empty())
				{
					int x=q.front();
					mp[x]=0;
					q.pop();
				}
				if(!q.empty())
					q.pop();
				//mp[x]=1;
				q.push(x);
			}
		}
		int pk=q.size();
		cout << max(ans,pk) << endl;
		mp.clear();
		//q.clear();
	}
}