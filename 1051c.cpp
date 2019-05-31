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

int a[105],cnt[105];
int main()
{	
	vector<int> v;
	int n;
	cin >> n;
	int xd[105];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		cnt[a[i]]++;
		xd[i]=cnt[a[i]];
		if(cnt[a[i]]==1)
			v.push_back(a[i]);
	}
	int cnt1=0,cnt2=0,cnt3=0;
	for (int i = 0; i < v.size(); ++i)
	{
		if(cnt[v[i]]==1)
			cnt1++;
		else if(cnt[v[i]]==2)
			cnt2++;
		else if(cnt[v[i]]>2)
			cnt3++;
	}
	if(cnt1%2==0)
	{
		int ans=cnt1/2;
		int cn=ans;
		char s[105];
		for (int i = 0; i <n; ++i)
		{
			if(cnt[a[i]]==1 && cn >0)
			{
				s[i]='A';
				cn--;
			}
			else
			{
				s[i]='B';
			}
		}
		s[n]='\0';
		cout << "YES" << endl;
		cout << s << endl;
	}
	else
	{
		//cout << cnt3 << endl;
		if(cnt3 > 0)
		{
			int ans=(cnt1+1)/2;
			int cn=ans;
			int cd=ans;
			int cp=0;
			char s[105];
		for (int i = 0; i <n; ++i)
		{
			// cout << cn << " " << cnt[a[i]] << endl;
			if(cnt[a[i]]==1 && cn > 0)
			{
				s[i]='A';
				cn--;
			}
			else if(cnt[a[i]]==1)
			{
				s[i]='B';
			}
		}
		for (int i = 0; i < n; ++i)
		{
			//cout << cnt[a[i]] << " "  << xd[i] << " " << cp << endl; 
			if(cnt[a[i]]>=3 && xd[i]==1 && cp==0)
			{
				s[i]='B';
				cp=1;
			}
			else if(cnt[a[i]] !=1)
				s[i]='A';
		}
		s[n]='\0';
		cout << "YES" << endl;
		cout << s << endl;

		}
		else
			cout << "NO" << endl;

	}

}