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
	cin >> n ;
	getchar();
	getchar();
	while(n--)
	{
		map<string,int>mp;
		set<string>st;
		string s;
		int ck=0;
		//getline(cin,s);
		//getline(cin,s);
		while(getline(cin,s))
		{
			if(s.compare("")==0)
				break;
			mp[s]++;
			st.insert(s);
			ck++;
		}
		for (auto it=st.begin();it != st.end() ;++it)
		{
			//double xd= (mp[*it]/(ck*1.0))*100;
			cout << *it << " " ;
			 printf("%.4lf\n",(mp[*it]/(ck*1.0))*100);
		}
		mp.clear();
		st.clear();
		if(n>0)
			cout << endl;
	}
}