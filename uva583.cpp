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
vector<int>prime;
bool isvisited[100005];
int mx=100005;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
void sieve()
{
	prime.push_back(2);
	for (int i = 3; i <= sqrt(mx); i +=2)
	{
		if(isvisited[i]==0)
			for (int j = i*i; j < mx; j +=i)
			{
				isvisited[j]=1;
			}
	}
	for (int i = 3; i < mx ; i +=2)
	{
		if(isvisited[i]==0)
			prime.push_back(i);
	}
}
vector<pair<int,int>>v;
void fctr(int n)
{
	for (int i = 0; prime[i] <= sqrt(n); ++i)
	{
		int lol=prime[i];
		if(n%lol==0)
		{
			int ck=0;
			while(n%lol==0) ck++,n /=lol;
			v.push_back({lol,ck});
			//cout << lol << " " << ck << endl;
		}

	}
	if(n !=1)
		v.push_back({n,1});
}

int main()
{
	int n;
	sieve();
	while(cin >> n  && n)
	{
		int lgbe=0;
		// if(n==1)
		// 	{
		// 		cout << 1 << " = " <<endl;
		// 		continue;
		// 	}
		if(n < 0)
			lgbe=1;
		if(n<0) fctr(n*-1);
		else
			fctr(n);


		// for (int i = 0; i < v.size(); ++i)
		// {
		// 	cout << v[i].first << " " << v[i].second << endl;
		// }
		if(lgbe)
		{
			int lgbena=0;
			cout << n << " = " << -1 << " x ";
			for (int i = 0; i < v.size(); ++i)
			 {
			 	int ck=v[i].second;
			 	//cout << v.size() << endl;
			 	//cout << v[i].first << " " << ck << endl;
			 	//cout << ck << endl;
			 	if(i==v.size()-1)
			 		lgbena=1;
			 	while(ck--)
			 	{
			 		if(!lgbena)
			 		{
			 			cout << v[i].first << " x ";
			 		}
			 		else
			 		{
			 			if(ck !=0 )
			 			cout << v[i].first << " x ";
			 			else
			 				cout << v[i].first << endl;
			 		}

			 	} 
			 } 
		}
		else
		{
			int lgbena=0;
			cout << n << " = ";
			for (int i = 0; i < v.size(); ++i)
			 {
			 	int ck=v[i].second;
			 	if(i==v.size()-1)
			 		lgbena=1;
			 	while(ck--)
			 	{
			 		if(!lgbena)
			 		{
			 			cout << v[i].first << " x ";
			 		}
			 		else
			 		{
			 			if(ck !=0 )
			 			cout << v[i].first << " x ";
			 			else
			 				cout << v[i].first << endl;
			 		}

			 	} 
			 } 

		}
		v.clear();
	} 
}