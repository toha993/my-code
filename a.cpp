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
	//string x="ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans=1000000000;
	int ck=0;
	for (int i = 0; i < n-3; ++i)
	{
			ck=0;
			if(s[i]!='A')
			{
				int c=s[i]-65;

				if(c<0)
					ck +=min(abs(c-0),abs(26+c));
				else
					ck +=min(abs(c-0),abs(26-c));
				//cout << ck << endl;
			}
			if(s[i+1]!='C')
			{
				int c=s[i+1]-65;
				//cout << c << endl;
				if(c<2)
					ck +=min(abs(c-2),abs(26-2+c));
				else
					ck +=min(abs(c-2),abs(26+2-c));
				//cout << ck << endl;
			}
			if(s[i+2] !='T')
			{
				int c=s[i+2]-65;
				//cout << c << endl;
				if(c<19)
					ck +=min(abs(c-19),abs(26-19+c));
				else
					ck +=min(abs(c-19),abs(26+19-c));
			//	cout << ck << endl;
			}
			if(s[i+3]!='G')
			{
				int c=s[i+3]-65;
				if(c<6)
					ck +=min(abs(c-6),abs(26-6+c));
				else
					ck +=min(abs(c-6),abs(26+6-c));
			//	cout << ck << endl;

			}
			ans=min(ans,ck);
			
	}
	cout << ans << endl;
}