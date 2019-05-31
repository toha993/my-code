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

int a[300005];
int main()
{
	int t,cp=0,ck=0,ans=0;
	cin >> t;
	string s;
	cin >> s;
	if(t%2)
	{
		cout << ":(" << endl;
		return 0;
	}
	for (int i = 0; i < t; ++i)
	{
		if(s[i]== '(')
			{
				ck++;
				a[i+1]=1;
			}
		else if(s[i]== ')')
			{
				cp++;
				a[i+1]=-1;
			}

	}
	//cout << s << endl;
	//cout << cp << " " << ck << endl;
	if(cp > t/2 || ck > t/2||s[1]== ')' || s[t-2]== '(' || s[0]== ')' || s[t-1] == '(')
	{
		cout << ":(" << endl;
		return 0;
	}
	for (int i = 1; i <= t; ++i)
	{
		if(ck==t/2)
			break;
		if(a[i]==0)
		{
			s[i-1]= '(';
			a[i]=1;
			ck++;
		}
	}
	for (int i = t; i >= 1; i--)
	{
		if(cp==t/2)
			break;
		if(a[i]==0)
		{
			s[i-1]= ')';
			a[i]=-1;
			cp++;
		}
	}
	int bal[300005];
	int cn=0;
	for(int i = 1; i <=t ; ++i)
	{
		bal[i]=bal[i-1]+a[i];
		if(bal[i]==0)
			cn++;
	}
	if(cn>1)
	{
		cout << ":(" << endl;
		return 0;
	}
	cout << s << endl;



}