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
//parinai
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int bttl[10005];
int n,h,sum=0,ans=0,ck=0;
int bal(int xd)
{
	if(xd >n)
		return 0;
	vector<int>v;
	for (int i = 1; i <=xd ; ++i)
	{
		//cout << bttl[i] << endl;
		v.push_back(bttl[i]);
	}
	sort(v.begin(),v.end(),greater<int>());
	sum=0;
	for (int i = 0; i <v.size(); i += 2)
	{
		sum +=v[i];
	}
	//cout << sum << endl;
	if(sum>h)
		return 0;
	else
		return xd;
}
int main()
{
	//int n,h,bal=0,ans=0,cp=0;
	cin >> n >> h;
	for (int i = 1; i <= n; ++i)
	{
		cin >> bttl[i];
	}
	while(bal(ck+1))
		ck++;

	cout << ck << endl;
}