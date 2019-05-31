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

int a[2005],even[2005],odd[2005];
int main()
{
	int n,cp=0,ck=0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if(a[i]%2)
			{
				ck++;
				even[ck]=a[i];
			}
		else
		{
			cp++;
			odd[cp]=a[i];
		}
	}
	//cout << ck << " " << cp << endl;
	odd[0]=0;
	even[0]=0;
	sort(even+1,even+ck+1);
	sort(odd+1,odd+cp+1);
	for (int i = 1; i <= ck ; ++i)
	{
		even[i] +=even[i-1];
	}
	for (int i = 1; i <= cp ; ++i)
	{
		odd[i] +=odd[i-1];
	}
	long long ans=0;
	if(n%2==0)
	{
		if(cp==ck)
		{
			cout <<  0 << endl;
			return 0;
		}
	}
	else
	{
		if(cp+1==ck || ck+1==cp)
		{
			cout << 0 << endl;
			return 0;
		}
	}
	if(cp>ck)
			{
				ans =odd[cp-ck-1];
			}
	else
		{
				ans=even[ck-cp-1];
		}
	cout << ans << endl;

}