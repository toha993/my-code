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
//unsolved
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int m[100005]={0};
int a[100005];
int main()
{
	int n,p;
	cin >> n >> p;
	long long ans=2*(n-1)+n;
	int suru,abr,cp=0,ck=0;
	set<int>st;
	map<pair<int,int>,int>vis;
	for (int i = 0; i < p; ++i)
		{
			cin >> a[i];
			m[a[i]]++;
			st.insert(a[i]);
		}
	ans -=st.size();
	if(p==1)
		{
			cout << ans << endl;
			return 0;
		}
	for (int i = 0; i < p-1; ++i)
	{
		if(a[i])
	}
	int cd=0;
	int chk=0;
	for(int i=1;i<=n;i++)
	{
		if(m[i]==2)
			{
				cd++;
			}
		else
			break;
	}
	if(cd==n)
	{
		cout << 0 << endl;
		return 0;
	}
	cd=0,cp=0;
	if(n%2==0)
		{
			for (int i = 1; i<n; i +=2)
			{
				if(m[i]==2 && m[i+1]==1)
				{
					cd +=2;
				}
				else if(m[i]==1 && m[i+1]==2)
				{
					cp +=2;
				}
				else
					break;
			}
			if(cp==n || cd ==n)
			{
				cout << 0 << endl;
				return 0;
			}

		}
	else
	{
		cp=0,cd=0;
		for (int i = 1; i <=n; i +=2)
			{
				if(i==n)
				{
					if(m[1]==m[n])
						cd++,cp++;
					break;
				}
				if(m[i]==2 && m[i+1]==1)
				{
					cd +=2;
				}
				else if(m[i]==1 && m[i+1]==2)
				{
					cp +=2;
				}
				else
					break;
			}
			if(cp==n || cd ==n)
			{
				cout << 0 << endl;
				return 0;
			}
	}
	cout << ans << endl;


	

}