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
	int n,b;
	cin >> n >> b;
	if(n<b){

		cout << -1 << endl;
		return 0;
	}
	if(n%2==0){
		int ans=n/2;
		if(ans%b==0)
			cout << ans << endl;
		else
		{
			int pk=ans/b;
			cout << (pk+1)*b << endl;
		}
	}
	else
	{
		int mgc=(n-1)/2;
		mgc +=1;
		if(mgc%b==0)
		{
			cout << mgc << endl;
			return 0;
		}
		int mara=mgc/b;
		cout << (mara+1)*b << endl;
	}
}