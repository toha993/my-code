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

int a[1000005];
int main()
{


	int t;
	cin >>t ;
	while(t--)
	{
		int n;
		cin >> n;
		string s;
		char p;
		cin >> s >> p;
		int cp=0;
		for (int i = 0; i < s.length(); ++i)
		{
			if(s[i]==p)
				a[cp++]=i+1;
		}
		long long ans=0;
		ans +=(a[0]-0)*(n-a[0]+1);
		//cout << ans << endl;
		for (int i = 1; i < cp; ++i)
		{
		 	//cout << a[i] << " " << a[i-1] << endl;
		 	ans +=(a[i]-a[i-1])*(n-a[i]+1);
		}
		cout << ans << endl;






	}
}