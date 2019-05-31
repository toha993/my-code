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
	char a[1005],b[1005];
	int p,q;
	cin >> p >> q;
	string s;
	int ans=0,total=0;
	int ase[1005],pos[1005],r;
	set<int>st;
	for(int i=0;i<p;i++)
	{
		cin >> s;
		//cout << s << endl;
		for (int j = 0; j < s.length(); ++j)
		{
			if(s[j]== 'S')
				ase[i]=j;
			else if(s[j]== 'G')
				{
					pos[i]=j;
				}
		}
		//cout << ase[i] << " " << pos[i] << endl;
		if(ase[i]-pos[i] <0){
			ans=1;
			continue;
		}
		st.insert(ase[i]-pos[i]);
		//cout << total <<endl;
		//cout << total << " " << ans << endl;
	}
		if(ans==1)
			cout << "-1" << endl;
		else
			cout << st.size() << endl;


}

