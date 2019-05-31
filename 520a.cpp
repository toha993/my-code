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
    int n;
    cin >> n;
    string s;
    cin >> s;
    //sort(s.begin(),s.end());
   // cout << s << endl;
    int a[1000];
    for (int i = 0; i < n; ++i)
    {
        s[i]=tolower(s[i]);
       // cout << s[i] << endl;
        a[s[i]-48]++;
    }
    int flag=0;
    for (int i = 97-48 ; i < 97-48+26 ; ++i)
    {
        if(a[i]==0)
        {
            //cout << i
           // cout << i << endl;
            flag=1;
            break;
        }
    }
    if(flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}