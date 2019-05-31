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
bool isprime[1000005];
vector<int>v;
void sieve()
{
	int mx=1000000;
	//bool isprime[1000005];
	memset(isprime,0,sizeof(isprime));
	isprime[1]=isprime[0]=1;
	for (int i = 4; i <= mx; i +=2)
	{
		isprime[i]=1;
	}
	for (int i = 3; i <= sqrt(mx); i+=2)
	{
		if(isprime[i]==0)
		{
			for (int j = 2*i; j <= mx; j +=i)
			{
				isprime[j]=1;
			}

		}
	}
	for (int i = 2; i <= mx; ++i)
	{
		if(isprime[i]==0)
			v.push_back(i);
	}
}
int arr[1000005];
vector<long long>vt;
void segmented(long long low,long long high)
{
	if(low==1)
		low++;
	int sqrtn=sqrt(high);
	memset(arr,0,sizeof(arr));
	for (int i = 0; i < v.size() &&  v[i] <=sqrtn; ++i)
	{
		long long p=v[i];
		long long j=p*p;
		if(j<low)
		{
			j=((low+p-1)/p)*p;
		}
		for (; j <= high; j +=p)
		{
			arr[j-low]=1;
		}
	}
	int ck=0;
	for (long long i =low ; i <=high; ++i)
	{
		if(arr[i-low]==0)
		{
			ck++;
			vt.push_back(i);
		}
	}
	//cout << ck << endl;

}
int main()
{	
	long long l,m;
	sieve();
	while(cin >> l >> m)
	{
		segmented(l,m);
		int mn=10000000;
		int mx=0;
		if(vt.size()<=1)
		{
			cout << "There are no adjacent primes." << endl;
			vt.clear();
			continue;
		}
		int mn1=0,mn2=0,mx1=0,mx2=0;
		for (int i = 0; i < vt.size()-1; ++i)
		{
			if(vt[i+1]-vt[i]>mx)
			{
				mx=vt[i+1]-vt[i];
				mx1=vt[i];
				mx2=vt[i+1];
			}
			if(vt[i+1]-vt[i]<mn)
			{
				mn=vt[i+1]-vt[i];
				mn1=vt[i];
				mn2=vt[i+1];
			}
		}
		cout << mn1 << "," << mn2 << " are closest, " << mx1 << "," <<mx2 << " are most distant." << endl;
		vt.clear();
	}






}

