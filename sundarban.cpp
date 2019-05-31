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

int a[100005],m[100005];
bool dhukse[100005];
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		vector<int>v;
		v.push_back(-1);
		int n;
		cin >> n;
		multiset<int>st;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			st.insert(a[i]);
			if(i==0)
				v.push_back(-1);
			else
				v.push_back(*--(--(st.end())));
		}
		//sor0t(v.begin(),v.end());
		int q;
		cin >> q;
		while(q--)
		{
			int p;
			cin >> p;
		 	cout << v[p] << endl;
		}
		v.clear();
	}

}