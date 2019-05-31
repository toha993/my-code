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
    string s;
    cin >> s;
    int len=s.length();
    int ck=0;
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i]=='a')
            ck++;
    }
    if(ck>len/2)
    {
        cout << len << endl;
    }
    else
        {
                cout << ((ck*2)-1) << endl;
        }

}