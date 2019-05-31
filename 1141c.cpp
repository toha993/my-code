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
int a[200005],b[200005],m[200005];
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
int main()
{
	set <int> st;
	int p,q=0,ans=1000000,pos;
	cin >> p;
	for (int i = 0; i < p; ++i)
	{
		cin >> a[i];
		q +=a[i];
		b[i] =q;
		if(ans > b[i])
		{
			pos=i;
			ans=b[i];
		}
	}
	int c;
	if(ans <0){
		c=pos+1;
	   m[c]=1;
	   st.insert(m[c]);
	}
	else if(ans==0 || ans >1){
		cout << -1 << endl;
		return 0;
	}
    else if(ans == 1)
    {
    	c=0;
    	m[0]=1;
    	st.insert(m[c]);
    }
    //cout << c << endl;
    for (int i = c+1; i < p ; ++i)
    {
          m[i]=m[i-1]+a[i-1];
          st.insert(m[i]);
          if(m[i]>p || m[i] <= 0)
          {
          	cout << -1 << endl;
          	return 0;
          }

          //cout << i << " "  << m[i] << endl;
    }
    for (int i = c-1; i >= 0; i--)
    {
    	m[i]=m[i+1]-a[i];
    	st.insert(m[i]);
    	if(m[i]>p || m[i] <= 0)
    	{
    		cout << -1 << endl;
    		return 0; 
    	}
    }
   // cout << st.size() << endl;
    if(st.size() !=p)
    {
    	cout << -1 << endl;
    	return 0;
    }
    for (int i = 0; i < p; ++i)
    {
    	cout << m[i] << " "; 
    }
    cout << endl;


}
