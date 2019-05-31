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
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		string s;
		cin >> n >> s;
		int ck=0;
		if(n!=1)
		for (int i = 0; i < n-1;)
		{
			if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') && (s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u'))
			{
				ck++;
				i +=2;
			}
			else
				i++;
		}
		else
		{
			cout << 0 << endl;
			continue;
		}
		cout << ck << endl;
	}
}