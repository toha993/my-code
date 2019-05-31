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
	string s="qewrtyupsidfghjklzxcavbnmo";
	char c;
	cin >> c;
	//cout << 
	int paisi;
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]==c)
		{
			paisi=i;
		}
	}
	//cout << paisi << endl;
	int samne;
	for (int i = paisi+1; i <s.length() ; ++i)
	{
		if(s[i]=='a' ||  s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
		{
			samne=i;
			break;
		}
	}
	//out << samne << endl;
 	int pise;
 	for (int i = paisi-1; i >=0; --i)
 	{
 		if(s[i]=='a' ||  s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' )
 		{
 			pise=i;
 			break;
 		}
 	}
 	if(paisi !=0 && paisi != s.length())
 	{
		if(samne-paisi<paisi-pise)
		{
			cout << s[samne] << endl;
		}
		else
			cout << s[pise] << endl;
	}
	else
	{
		if(paisi==0)
			cout << s[samne] << endl;
		else
			cout << s[pise] << endl;
	}
}