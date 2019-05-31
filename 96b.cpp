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
long long x[20005];
long long k = 0;
const int num_len = 10;

void dfs(long long a, long long level)
{
    if (level > num_len)
        return;
    x[k++] = a;
    dfs(a * 10 + 4, level + 1);
    dfs(a * 10 + 7, level + 1);
}
bool check(long long xd)
{
	int cp=0,ck=0;
	string s;
	s=to_string(xd);
	for (int i = 0; i < s.length(); ++i)
	{
		if(s[i]=='4')
			ck++;
		else
			cp++;
	}
	if(cp==ck)
		return 1;
	else
		return 0;
}
int main()
{
    memset(x, 0, sizeof(x));
    dfs(0, 0);
    sort(x, x+k);
    int mg;
    cin >> mg;
    for (int i = 0; i < k; ++i)
    {
    	if(x[i]>=mg)
    	{
    		if(check(x[i]))
    		{
    			cout << x[i] << endl;
    			return 0;
    		}


    	}
    }


    
}