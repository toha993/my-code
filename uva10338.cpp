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
unsigned long long fct[30];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void fact()
{
	
	fct[1]=1;
	for(int i=2;i<=20;i++)
	{
		fct[i]=fct[i-1]*i;
		//cout << fct[i] << endl;
	}
}

int main()
{
	int n;
	cin >> n;
	set<int>st;
	set<int>::iterator it;
	fact();
	int ck=0;
	while(n--)
	{
		string s;
		cin >> s;
		int a[180]={0};
		int len=s.length();
		for (int i = 0; i < s.length(); ++i)
		{
			a[s[i]-48]++;	
			st.insert(s[i]-48);
		}
		// for (int i = 0; i < len; ++i)
		// {
		// 	cout << a[s[i]-48] << endl;
		// }
		unsigned long long ans;
		ans=fct[len]; 
		//cout << ans << endl;
		cout << "Data set " << ++ck << ": ";
		for (it=st.begin();it !=st.end();it++)
		{
			ans /=fct[a[*it]];
		}
		cout << ans << endl;

		st.clear();
	}
}