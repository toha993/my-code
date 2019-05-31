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
	vector<int>v[10005];
	while(cin >> n && n)
	{
		for (int i = 0; i < n; ++i)
		{
			int x;
			for (int j = 0; j < 5; ++j)
			{
				cin >> x;
				v[i].push_back(x);
			}
			sort(v[i].begin(),v[i].end());
		}
		int pk=0;
		vector<int>ans;
		for (int i = 0; i < n-1; ++i)
		{
			int xk=0;
			for(int j=i+1;j<n;j++)
			{
				if(v[i]==v[j])
				xk++;
			}
			if(xk !=0)
				ans.push_back(xk+1);
		}
		//7int len=ans.size();
		sort(ans.begin(),ans.end());
		if(ans.size()==0)
		{
			cout << n << endl;
		}
		else if(ans[ans.size()-1] != ans[ans.size()-2])
		{
			cout << ans[ans.size()-1] << endl;
		}
		else
		{
			int pk=lower_bound(ans.begin(),ans.end(),ans[ans.size()-1])-ans.begin();
			pk= ans.size()-pk;
			cout << pk*ans[ans.size()-1] << endl;
		}
		for (int i = 0; i < n; ++i)
		{
			v[i].clear();
		}
	}
}