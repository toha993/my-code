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
	long long a,b,n,temp=1,ans,p,mara;
	cin >> a;
	b=a;
	while(b>0)
	{
		temp *=b%10;
		b /=10;
	}
	//cout << temp << endl;
	ans=(a/10)-1;\
	if(ans <0)
		n=0;
	else
		n=1;
	while(ans>0)
	{
		n *=ans%10;
		ans /=10;
	}
	n *=9;
	mara=max(n,temp);
	//cout << mara << endl;
	ans=(a/100)-1;
	if(ans <0)
		n=0;
	else
		n=1;
	while(ans>0)
	{
		n *=ans%10;
		ans /=10;
	}
	n *=9;
	n *=9;
	mara=max(n,mara);
	//cout << mara << endl;
	ans=(a/1000)-1;
	if(ans <0)
		n=0;
	else
		n=1;
	while(ans>0)
	{
		n *=ans%10;
		ans /=10;
	}
	n *=9;
	n *=9;
	n *=9;
	mara=max(n,mara);
	//cout << mara << endl;
	ans=(a/10000)-1;
	if(ans <0)
		n=0;
	else
		n=1;
	while(ans>0)
	{
		n *=ans%10;
		ans /=10;
	}
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	mara=max(n,mara);
	//cout << mara << endl;
	ans=(a/100000)-1;
	if(ans <0)
		n=0;
	else
		n=1;
	while(ans>0)
	{
		n *=ans%10;
		ans /=10;
	}
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	mara=max(n,mara);
	//cout << mara << endl;
	ans=(a/1000000)-1;
	if(ans <0)
		n=0;
	else
		n=1;
	while(ans>0)
	{
		n *=ans%10;
		ans /=10;
	}
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	mara=max(n,mara);
	//cout << mara << endl;
	ans=(a/10000000)-1;
	if(ans <0)
		n=0;
	else
		n=1;
	while(ans>0)
	{
		n *=ans%10;
		ans /=10;
	}
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	mara=max(n,mara);
	//cout << mara << endl;
	ans=(a/100000000)-1;
	if(ans <0)
		n=0;
	else
		n=1;
	while(ans>0)
	{
		n *=ans%10;
		ans /=10;
	}
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	mara=max(n,mara);
	ans=(a/1000000000)-1;
	//cout << ans << endl;
	if(ans <0)
		n=0;
	else
		n=1;
	while(ans>0)
	{
		n *=ans%10;
		ans /=10;
	}
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n *=9;
	n*=9;
	mara=max(n,mara);
	cout << mara << endl;

}