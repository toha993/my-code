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
//vector<int>prime;
//bool isvisited[1000005];
//int mx=1000005;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
// void sieve()
// {
// 	prime.push_back(2);
// 	for (int i = 3; i <= sqrt(mx); i +=2)
// 	{
// 		if(isvisited[i]==0)
// 			for (int j = i*i; j < mx; j +=i)
// 			{
// 				isvisited[j]=1;
// 			}
// 	}
// 	for (int i = 3; i < mx ; i +=2)
// 	{
// 		if(isvisited[i]==0)
// 			prime.push_back(i);
// 	}
// }
vector<long long>v;
void fctr(ll n)
{
	if(n%2==0)
	{
		while(n%2==0) n /=2,v.push_back(2);;
		
	}
	for (ll i = 3; i*i<=n; i +=2)
	{
		//ll lol=prime[i];
		if(n%i==0)
		{
			while(n%i==0) n /=i,v.push_back(i);;
			
		}

	}
	if(n !=1)
		v.push_back(n);
}

int main()
{
	ll n;
	//sieve();
	while(cin >> n && n>=0)
	{
		fctr(n);
		for (int i = 0; i < v.size() ; ++i)
		{
			cout << "    " << v[i] << endl;
		}
		cout << endl;
		v.clear();
	}

	
}