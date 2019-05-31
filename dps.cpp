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
		string s;
		cin >> s;
		map<char,int>mp;
		set<char>st;
		//set<int>sd;
		for (int i = 0; i < s.length(); ++i)
		{
			st.insert(s[i]);
			mp[s[i]]++;
		}
		int len=s.length();
 		int cp=0,ck=0,cd=0;
 		for (auto it=st.begin();it!=st.end(); ++it)
 		{
 			if(mp[*it]%2==1)
 				cp++;
 		}
 		if(len&1 && cp <=3)
 			cout <<"DPS" << endl;
 		else if(len%2==0 && cp==2 )
 			cout <<"DPS" << endl;
 		else
 			cout << "!DPS" << endl;
 		
 		mp.clear();
		st.clear();
	}
}