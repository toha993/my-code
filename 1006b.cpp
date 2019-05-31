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

int a[2005],xd[2005]={0},bal[2005];
vector<int> v;
int main()
{
	int n,p;
	cin >> n >> p;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		v.push_back(a[i]);
	}
	sort(v.begin(),v.end());
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	cout << v[i] << endl;
	// }
	int ck=0,ttl=0;
	for (int i = v.size()-1; i>=0 ; --i)
	{
		//cout << v[i] << endl;
		xd[v[i]]=1;
		bal[v[i]]++;
		ttl +=v[i];
		ck++;
		if(ck>=p)
			break;
	}
	// for (int i = 0; i < n; ++i)
	// {
	// 	cout << xd[a[i]] << endl;
	// }
	int suru=0;
	vector<int>nisi;
	for (int i = 0; i <n; ++i)
	{
		if(xd[a[i]]==1)
		{
			//cout << a[i] << " " << xd[a[i]] << endl; 
			if(ck==1)
				nisi.push_back(n-suru);
			else
				nisi.push_back(i+1-suru);
			bal[a[i]]--;
			if(bal[a[i]]==0)
				xd[a[i]]=0;
			suru=i+1;
			ck--;
		}
	}
	cout << ttl << endl;
	for (int i = 0; i < nisi.size(); ++i)
	{
		if(i != nisi.size()-1)
		cout << nisi[i] << " ";
		else
			cout << nisi[i] << endl;
	}
}