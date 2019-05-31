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

int taken[100];
int main()
{
	int n;
	int zx=1;
	while(cin >> n)
	{
		if(zx != 1 && n !=0)
			cout << endl;
		zx++;
		if(n==0)
			break;
		int paisi=0;
		for (int xd = 1234; xd <=98765; ++xd)
		{
			for (int i = 0; i < 10; ++i)
			{
				taken[i]=0;
			}
			string s;
			s=to_string(xd);
			int flag=0;
			if(xd<10000)
				s +='0';
			for (int i = 0; i < s.length()-1; ++i)
			{
				taken[s[i]-48]=1;
				for (int j = i+1; j < s.length(); ++j)
				{
					taken[s[j]-48]=1;
					if(s[i]==s[j])
					{
						//cout << s[i]
						flag=1;
						break;
					}
				}
				if(flag)
					break;
			}
			if(flag)
				continue;
			flag=0;
			int ans= xd*n;
			if(ans>98765)
				break;
			s=to_string(ans);
			//cout << xd << " " <<  s << " ";
			for (int i = 0; i < s.length()-1; ++i)
			{

				for (int j = i+1; j < s.length(); ++j)
				{
					if(s[i]==s[j] || taken[s[i]-48]==1 || taken[s[j]-48]==1)
					{
						//cout << s[i] << " " << s[j] << " "  << taken[s[i]-48] << " " << taken[s[j]-48] << endl;
						flag=1;
						break;
					}
				}
				if(flag)
					break;
			}
			//cout << endl << endl;
			if(flag)
				continue;
			//cout << ans << endl;
			if(ans<10000 && xd < 10000 || ans>98765)
				continue;
			else
			{
				paisi=1;
				if(xd<10000)
				cout << ans << " / 0" << xd <<  " = " << n << endl;
				else
				cout << ans << " / " << xd <<   " = " << n << endl;
			}

		}
		if(!paisi)
			cout << "There are no solutions for " << n << "." << endl;
	}

}