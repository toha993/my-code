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
#define ll long long
using namespace std;
vector<ll>v;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int main()
{

	set<double>st;
	st.insert(1);
 	set <double> :: iterator it = st.begin ();
	while(st.size() < 6600)
	{
		st.insert(*it * 2);
		st.insert(*it * 3);
		st.insert(*it * 5);
		st.insert(*it * 7);
		*it++;
	}
	int n;
	vector<ll>v(st.begin(),st.end());
	while(cin >> n && n)
		{
			if(n%100>=10 && n%100<=20)
			cout << "The " << n <<"th humble number is "<<v[n-1] << "." << endl;
			else if(n%10==1)
			{
				cout << "The " << n <<"st humble number is "<<v[n-1] << "." <<  endl;
			}
			else if(n%10==2)
			{
				cout << "The " << n <<"nd humble number is "<<v[n-1] <<"." <<endl;
			}
			else if(n%10==3)
			{
				cout << "The " << n <<"rd humble number is "<<v[n-1] << "."<<endl;
			}
			else
				cout << "The " << n <<"th humble number is "<<v[n-1] << "."<< endl;

		}

}