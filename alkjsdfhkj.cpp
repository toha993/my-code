/*input
20
10101010101010


*/
/*

author : Avi Mallick

          CSE'15 SUST

*/
#include <bits/stdc++.h>
// #include<complex>
#define pii                   pair<int,int>
#define tii                   pair<int,pair<int,int> >
#define mkp                   make_pair
#define fs                    first
#define sc                    second
#define pb                    push_back
#define ppb                   pop_back()
#define pcase(x)              printf("Case %d: ",x)
#define hi                    cout<<"hi"<<endl;
#define mod                   1000000007
#define inf                   1000000007
//#define pi                    acos(-1.0)
#define mem(arr,x)            memset((arr), (x), sizeof((arr)));
#define FOR(i,x)              for(int i=0;i<(x); i++)
#define FOR1(i,x)             for(int i = 1; i<=(x) ; i++)
#define jora(a,b)             make_pair(a,b)
#define tora(a,b,c)           jora(a,jora(b,c))
#define sf1(a)                scanf("%d",&a)
#define sf2(a,b)              scanf("%d %lld",&a,&b)
#define sf3(a,b,c)            scanf("%d %d %d",&a,&b,&c)
#define pf1(a)                printf("%d\n",a);
#define pf2(a,b)              printf("%d %d\n",a,b)
#define pf3(a,b,c)            printf("%d %d %d\n",a,b,c)
#define sf1ll(a)              scanf("%lld",&a)
#define sf2ll(a,b)            scanf("%I64d %I64d",&a,&b)
#define sf3ll(a,b,c)          scanf("%lld %lld %lld",&a,&b,&c)
#define pf1ll(a)              printf("%lld\n",a);
#define pf2ll(a,b)            printf("%I64d %I64d\n",a,b)
#define pf3ll(a,b,c)          printf("%I64d %I64d %I64d\n",a,b,c)
// #define N 5*100000+5
#define level 26
#define eps 1e-9
// #define noya vector< vector<int> >(6,vector<int>(6,0))
// #define mat vector<vector<int> >
// #define m 6
using namespace std;
typedef long long lint;
int main()
{
    int n;
    sf1(n);
    vector<pii>vt;
    int sum=0;
    for(int i=0;i<n;i++)
    {
    	int a,b,c;
    	sf3(a,b,c);
    	vt.push_back(jora(b+c,-a));
    	sum+=a;
    }
    sort(vt.begin(),vt.end());
    int ans=0;
    for(pii x : vt )
    {
    	int b=x.fs;
    	int a=x.sc;
    	ans=max(ans,b+sum);
    	sum+=a;
    }
    pf1(ans);



	return 0;
}