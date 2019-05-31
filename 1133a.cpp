#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,ck=0,ans1,ans2;
    char p;
    cin >> a  >> p >> b >> c >> p >> d;
    ck=(a+c)*60;
    ck +=(b+d);
    //cout << ck << endl;
    ck=ck/2;
    ans1=ck/60;
    ans2=ck%60;
    if(ans1 <10)
        cout << 0 << ans1 << ":";
    else
        cout << ans1 << ":";
    if(ans2 <10)
        cout << 0 << ans2 << endl;
    else
        cout << ans2 << endl;



}
