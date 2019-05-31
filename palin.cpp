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
bool nine(string x)
{
	for (int i = 0; i < x.length(); ++i)
	{
		if(x[i]=='9')
			continue;
		else
			return 0;
	}
	return 1;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		string s,a;
		cin >> s;
		int sz=s.length();
		if(nine(s))
		{
			//cout << 433 << endl;
			a +='1';
			for (int i = 0; i < s.length()-1; ++i)
			{
				a +='0';
			}
			a +='1';
			cout << a << endl;
			continue;
		}
		else
		{
			int i=sz/2;
			int j=i;
			if(sz%2==0)
				i -=1;
			while(i>=0 && s[i]==s[j])
			{
				i--;
				j++;
			}
			if(i<0 || s[i] < s[j])
			{
				i=sz/2;
				j=i;
				if(sz%2==0)
				{
					i -=1;
				}
				int carry=1;
				while(i>=0)
				{
					int ck=(s[i]-'0')+carry;
					carry =ck/10;
					s[i]=(ck%10)+'0';
					s[j]=s[i];
					i--;
					j++;
				}

			}
			else
			{
				while(i >=0)
				{
					s[j]=s[i];
					i--;
					j++;
				}
			}



			cout << s << endl;





		}
	}




}