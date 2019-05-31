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
#define pb push_back
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
//char b[]="abcdefghijklmnopqrstuvwxyz";
int strt,nxt;
bool visited[26];
vector<int>dependson[26];
string last;
int nmb(char x)
{
	return x - 'a';
}
char chr(char x)
{
	return char(x + 'a');
}
void dfs(int p)
{
	visited[p]=true;
	for (int i = 0; i < dependson[p].size(); ++i)
	{
		nxt=dependson[p][i];
		//cout << nxt << endl;
		if(nxt==strt)
		{
			cout << "Impossible" << endl;
			exit(0);
		}
		if(!visited[nxt])
		{
			dfs(nxt);
		}
	}
	last +=chr(p);
}

int main()
{
	int n;
	cin >> n;
	string s;
	vector<string>v;
	for (int i = 1; i <= n; ++i)
	{
		cin >> s;
		v.push_back(s);
	}
	for(int i=0;i<v.size()-1;i++)
	{
		bool nx=0;
		for (int j = 0; j < min(v[i].size(),v[i+1].size()); ++j)
		{
			if(v[i][j]!=v[i+1][j])
			{
				nx=1;
				dependson[nmb(v[i+1][j])].pb(nmb(v[i][j]));
				break;
			}
		}
			if(!nx && v[i+1].size()<v[i].size())
			{
				cout << "Impossible" << endl;
				exit(0);
			}
	}
	for (int i = 0; i < 26; ++i)
	{
		if(!visited[i])
		{
			strt=i;
			dfs(i);
		}
	}
	cout << last << endl;
}