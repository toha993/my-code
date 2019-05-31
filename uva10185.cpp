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
#include<string>
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
	string s;
	set<string>v;
	while(getline(cin,s))
	{
		stringstream ss(s);
		string p;
		
		while(ss >> p){
			string sd;
			//cout << p <<endl;
			for (int i = 0; i < p.size(); ++i)
			{
				if(isalpha(p[i]))
					sd +=p[i];
			}
			transform(sd.begin(), sd.end(), sd.begin(), ::tolower); 
			v.insert(sd);
		}
	}
	//sort(v.begin(),v.end());
	for (auto it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << endl;
	}

}